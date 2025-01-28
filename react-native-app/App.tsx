import React, { useEffect, useState } from 'react';
import { Text, View } from 'react-native';
import { initialize, getThetaInfo } from 'theta-client-react-native';

function App(): React.JSX.Element {
  const [model, setModel] = useState<string | null>(null); // State to store the model

  useEffect(() => {
    const initializeThetaClient = async () => {
      try {
        await initialize('http://192.168.1.1', {});
        console.log('Successfully initialized theta-client');

        try {
          const thetaInfo = await getThetaInfo();
          console.log('Getting RICOH THETA camera information');
          console.log(thetaInfo);

          // Save the model in state
          setModel(thetaInfo.model);
        } catch (error) {
          console.log('Error getting camera information:', error);
        }
      } catch (error) {
        console.log('Error initializing theta-client:', error);
      }
    };

    initializeThetaClient();
  }, []);

  return (
    <View
      style={{
        flex: 1,
        justifyContent: 'center',
        alignItems: 'center',
      }}
    >
      <Text>theta-client with React Native 0.77</Text>
      {model ? <Text>Camera Model: {model}</Text> : <Text>Loading camera model...</Text>}
    </View>
  );
}

export default App;
