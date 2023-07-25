import { Button, Alert } from 'react-native';
import { useAuth } from '@squantumengine/react-native-sqeid';

const GetConfigButton = () => {
    const { getConfig } = useAuth();

    const onGetConfigButtonPressed = () => {
        console.log("getConfig called")
        getConfig().then(response => {
          Alert.alert(`Success Get Config with`, `${JSON.stringify(response)}`)
        }).catch(err => {
          Alert.alert(`Failed Get Config with ${err}`)
        })
    }

    return (
    <Button 
    title='Get Config'
    onPress={onGetConfigButtonPressed} />
    );
};

export default GetConfigButton;