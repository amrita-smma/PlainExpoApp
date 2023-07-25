import { StyleSheet, Text, View, Button } from 'react-native';
import { AuthProvider } from '@squantumengine/react-native-sqeid';
import GetConfigButton from './Components/GetConfigButton';

export default function App() {
  return (
    <AuthProvider clientId={"simas-id-amrita"} env={"development"}>
      <View style={styles.container}>
        <GetConfigButton />
      </View>
    </AuthProvider>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
