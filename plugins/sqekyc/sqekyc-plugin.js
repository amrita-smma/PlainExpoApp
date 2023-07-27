const fs = require("fs-extra");
const path = require("path");
const {
  withDangerousMod,
  withProjectBuildGradle,
  IOSConfig,
  withXcodeProject,
} = require("@expo/config-plugins");

const { getAppDelegateFilePath } = IOSConfig.Paths;

const githubPackageTag = "[sqekyc-package]";
const githubPackagesConfiguration = `// ${githubPackageTag}
        maven {
          name = "GitHubPackages"
          url = uri("https://maven.pkg.github.com/sqesmma/sqekyc-android-package")
          credentials {
            username = githubProperties['gpr.usr']
            password = githubProperties['gpr.key']
          }
        }\n`;

const githubPropertiesFileSetupTag = "[sqe-github-package-prop]";
const githubPropertiesFileSetup = `// ${githubPropertiesFileSetupTag}
def githubProperties = new Properties()
githubProperties.load(new FileInputStream(rootProject.file("github.properties")))
`;
const jCenterRepository = "jcenter()"
const allProjectsTag = "allprojects {\n    repositories {\n"

const isJcenterAdded = (config) => {
  const startIndex = config.modResults.contents.indexOf(allProjectsTag)
  const endIndex = config.modResults.contents.length - 1
  const repositorySection = config.modResults.contents.substring(startIndex, endIndex)

  return repositorySection.includes(jCenterRepository)
}

const withGithubPackageRepository = (config) => {
  return withProjectBuildGradle(config, (config) => {
    if (!isJcenterAdded(config)) {
      config.modResults.contents = config.modResults.contents.replace(
        allProjectsTag,
        `allprojects {\n    repositories {
        ${jCenterRepository}\n`
      )
    }

    if (config.modResults.contents.indexOf(githubPackageTag) == -1) {
      config.modResults.contents = config.modResults.contents.replace(
        allProjectsTag,
        `allprojects {\n    repositories {
          ${githubPackagesConfiguration}`
      )
    }

    if (
      config.modResults.contents.indexOf(githubPropertiesFileSetupTag) == -1
    ) {
      config.modResults.contents = config.modResults.contents.replace(
        "allprojects {",
        `${githubPropertiesFileSetup}\nallprojects {`
      )
    }

    return config;
  })
}

const copyAndroidLicenseFile = (config, env) => {
  const platform = "android";
  return withDangerousMod(config, [
    platform,
    async (config) => {
      const root = config.modRequest.platformProjectRoot
      const sourcePath = path.resolve(__dirname, `./license/${env}/${platform}/LICENSE`)
      const destPath = `${root}/app/src/main/assets`

      fs.copySync(sourcePath, path.join(destPath, "LICENSE"))
      return config;
    },
  ])
}

const copyAndAddiOSLicenseFileToXcodeProject = (config, env) => {
  return withXcodeProject(
    config, async (config) => {
      const xcodeProject = config.modResults;
      const { projectRoot, projectName } = config.modRequest;
      const group = xcodeProject.pbxGroupByName(projectName);
	    const key = xcodeProject.findPBXGroupKey({
	      name: group.name,
	      path: group.path,
	    });

      const filename = 'license.lic';
      const sourcePath = path.resolve(__dirname, `./license/${env}/ios`, filename)
	    const sourceDir = path.dirname(getAppDelegateFilePath(projectRoot));
      const dst = path.resolve(sourceDir, filename);
      fs.writeFileSync(dst, fs.readFileSync(sourcePath, 'utf-8'));
      xcodeProject.addSourceFile(`${projectName}/${filename}`, null, key);

      return config;
    }
  );
}

const copyGithubPropertiesFile = (config) => {
  return withDangerousMod(config, [
    "android",
    async (config) => {
      const root = config.modRequest.platformProjectRoot
      const sourcePath = path.resolve(__dirname, "./license/github.properties")

      fs.copySync(sourcePath, path.join(root, "github.properties"))
      return config
    },
  ])
}

module.exports = function (config, { env }) {
  console.log(env)

  config = copyAndroidLicenseFile(config, env)
  config = copyAndAddiOSLicenseFileToXcodeProject(config, env)
  config = copyGithubPropertiesFile(config)
  config = withGithubPackageRepository(config)
  return config
};
