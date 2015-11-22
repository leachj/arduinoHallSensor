typedef int ArduinoHallSensor;

#ifdef __cplusplus
extern "C"{
#endif 

int arduinoHallSensor_initialise(int device);
void arduinoHallSensor_get_counts(ArduinoHallSensor handle, char* counts);
void arduinoHallSensor_reset_counts(ArduinoHallSensor handle);

#ifdef __cplusplus
}
#endif
