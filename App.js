import { NavigationContainer } from '@react-navigation/native';
import { createNativeStackNavigator } from '@react-navigation/native-stack';

import Settings from './Screens/Settings';
import Liveness from './Screens/Liveness';

const Stack = createNativeStackNavigator();

export default function App() {
  return (
    <>
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen
          name="Settings"
          component={Settings}
          options={{ headerShown: false }}
        />
        <Stack.Screen
          name="Liveness"
          component={Liveness}
        />
      </Stack.Navigator>
    </NavigationContainer>
    </>
  );
};