import {
  Text,
  View,
  SafeAreaView,
  TouchableOpacity,
  ScrollView,
  StyleSheet
} from "react-native";
import { AuthProvider } from '@squantumengine/react-native-sqeid';
import GetConfigButton from '../Components/GetConfigButton';

function Settings({ navigation }) {

  const defaultClientId = 'simas-id-amrita';
  const defaultEnv = 'staging';

  const onStartButtonPressed = () => {
    navigation.navigate("Liveness");
  };

  return (
    <AuthProvider clientId={defaultClientId} env={defaultEnv}>
      <ScrollView style={styles.container}>
        <View style={styles.containerStyle}>
          <SafeAreaView />
          <Text numberOfLines={1} style={styles.topTitle}>
            Welcome to the test Expo App
          </Text>
          <GetConfigButton />
          <View style={styles.contentBody}>
            <TouchableOpacity
              style={styles.btnStart}
              onPress={onStartButtonPressed}
            >
              <Text style={[styles.sectionTitle, { color: "#FFFFFF" }]}>
                Let's Liveness Check
              </Text>
            </TouchableOpacity>
          </View>
        </View>
      </ScrollView>
    </AuthProvider>
  );
};

export default Settings;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    paddingHorizontal: 6,
  },
  containerStyle: {
    flex: 1,
    alignItems: 'center',
    paddingHorizontal: 12,
  },
  inputContainerStyle: { marginBottom: 16 },
  textInputStyle: {
    backgroundColor: '#E4DDF8',
    padding: 16,
    borderRadius: 5,
    marginTop: 12,
    borderWidth: 0,
    color: '#313131',
  },
  topTitle: {
    fontSize: 23,
    marginBottom: 26,
    marginTop: 10,
    fontWeight: '700',
    color: '#313131',
  },
  sectionTitle: {
    fontSize: 16,
    fontWeight: '600',
    color: '#313131',
  },
  contentBody: {
    backgroundColor: '#F5F4F9',
    width: '100%',
    borderRadius: 8,
  },
  btnStart: {
    width: '100%',
    height: 57,
    backgroundColor: '#592EF0',
    borderRadius: 9,
    justifyContent: 'center',
    alignItems: 'center',
    marginTop: 24,
  },
});
