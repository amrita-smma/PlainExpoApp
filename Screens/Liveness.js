import {
  SafeAreaView,
  View,
  ScrollView,
  StyleSheet
} from 'react-native';
import {
  useRoute
} from '@react-navigation/native';
import LivenessButton from '../Components/LivenessButton';
// import { KycProvider } from '@squantumengine/react-native-sqekyc';

const Liveness = () => {

  const route = useRoute();
  const { env } = route?.params ?? '';

  return (
    // <KycProvider env={env}>
      <ScrollView style={styles.container}>
        <SafeAreaView />
        <View style={styles.divider16} />
        <LivenessButton/>
      </ScrollView>
    // </KycProvider>
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