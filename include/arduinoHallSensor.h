typedef int ArduinoHallSensor;

#ifdef __cplusplus
extern "C"{
#endif 

int initialise(int device);
void get_counts(ArduinoHallSensor handle, char* counts);

#ifdef __cplusplus
}
#endif
