import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View, Button } from 'react-native';
import {  AuthProvider, useAuth } from '@squantumengine/react-native-sqeid';
import GetConfigButton from './Components/GetConfigButton';


export default function App() {
  return (
    <AuthProvider clientId={"simas-id-amrita"} env={"development"}>
      <View style={styles.container}>
        <Text>Open up App.js to start working on your app!</Text>
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
