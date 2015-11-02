#include "arduinoHallSensor.h"
#include <stdio.h>

int main(){

	ArduinoHallSensor handle = initialise(1);

	if(handle<=0){
		return 1;
	}
	
	char counts[2];
	get_counts(handle, counts);

	printf("right count: %d left count: %d\n", counts[0], counts[1]);

	return 0;
}
