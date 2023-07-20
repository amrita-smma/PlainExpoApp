import { Button } from 'react-native';
import {  AuthProvider, useAuth } from '@squantumengine/react-native-sqeid';

const GetConfigButton = () => {
    const { getConfig, testFunction } = useAuth();
    const getConfigButtonPressed = (() => {
        console.log("check1")
        getConfig().then(response => {
        // Success
        console.log(response)
        }).catch(err => {
        // Failure
        console.log(err)
        })
    })

    return (
    <Button 
    title='Get Config'
    onPress={getConfigButtonPressed} />
    );
};

export default GetConfigButton;