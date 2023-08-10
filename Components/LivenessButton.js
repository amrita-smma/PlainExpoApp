import { Button } from 'react-native';
import { useKyc } from '@squantumengine/react-native-sqekyc';

const livenessId = 'F0DH4bXRDf1F810e';
const livenessLicenseId = 'd88e8653-3d3f-5973-83c5-93556cc1a4d5';

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