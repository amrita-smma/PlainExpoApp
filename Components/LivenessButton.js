import { Button } from 'react-native';
import { useKyc } from '@squantumengine/react-native-sqekyc';

const livenessId = 'UImJAZLTQqHroT1b';
const livenessLicenseId = '6dc1830f-5acc-5547-8d3a-0c9f80950ae4';

const LivenessButton = () => {
    const { startLivenessCheck } = useKyc();

    const onLivenessButtonPressed = () => {
        startLivenessCheck(
          livenessId,
          livenessLicenseId,
          3,
          'Pastikan wajah anda berada di dalam area di bawah ini'
        )
          .then((base64SelfieImage) => {
            console.log(`Liveness Success`);
          })
          .catch((error) => {
            console.log(`Liveness Failed`);
          });
      };

    return (
    <Button 
    title='Start Liveness'
    onPress={onLivenessButtonPressed} />
    );
};

export default LivenessButton;