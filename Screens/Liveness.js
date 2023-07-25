// import { useKyc } from '@squantumengine/react-native-sqekyc';
import {
  SafeAreaView,
  View,
  TouchableOpacity,
  Text,
  ScrollView,
  StyleSheet
} from 'react-native';

const livenessId = 'UImJAZLTQqHroT1b';
const livenessLicenseId = '6dc1830f-5acc-5547-8d3a-0c9f80950ae4';

function Liveness({ navigation }) {
  // const { startLivenessCheck } = useKyc();

  const startLiveness = () => {
    // startLivenessCheck(
    //   livenessId,
    //   livenessLicenseId,
    //   3,
    //   'Pastikan wajah anda berada di dalam area di bawah ini'
    // )
    //   .then((base64SelfieImage) => {
    //     console.log(`Liveness Success`);
    //   })
    //   .catch((error) => {
    //     console.log(`Liveness Failed`);
    //   });
  };

  return (
    <ScrollView style={styles.container}>
      <SafeAreaView />
      <View style={styles.divider16} />
      <TouchableOpacity style={styles.button} onPress={() => startLiveness()}>
        <Text style={styles.sectionTitle}>Start Liveness Check</Text>
      </TouchableOpacity>
    </ScrollView>
  );
};

export default Liveness;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: 'white',
    padding: 12,
  },
  topTitle: {
    fontSize: 26,
    marginBottom: 26,
    fontWeight: '700',
    color: '#313131',
  },
  header: {
    fontSize: 20,
    marginBottom: 16,
    fontWeight: '700',
    color: '#313131',
    textAlign: 'left',
  },
  button: {
    width: '100%',
    height: 57,
    backgroundColor: '#592EF0',
    borderRadius: 9,
    marginTop: 12,
    justifyContent: 'center',
    alignItems: 'center',
    marginBottom: 15,
  },
  sectionTitle: {
    fontSize: 16,
    fontWeight: '600',
    color: '#FFFFFF',
  },
  caption: {
    fontSize: 12,
    fontWeight: '500',
    color: '#000000',
  },
  error: {
    fontSize: 14,
    fontWeight: '600',
    color: '#B00020',
  },
  dummyBG: {
    width: '100%',
    height: 400,
    backgroundColor: 'grey',
    borderRadius: 8,
    marginBottom: 10,
  },
  divider16: {
    height: 16,
  },
  imgSelfie: {
    width: 300,
    height: 400,
    borderRadius: 8,
    marginBottom: 10,
    flex: 1,
    alignSelf: 'center',
    justifyContent: 'center',
  },
});