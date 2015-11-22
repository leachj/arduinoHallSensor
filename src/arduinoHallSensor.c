#include "arduinoHallSensor.h"
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

ArduinoHallSensor arduinoHallSensor_initialise(int device){
	ArduinoHallSensor handle=-1;
	char buf[15];
	snprintf(buf,15,"/dev/i2c-%d",device);
	if ((handle = open(buf, O_RDWR)) < 0) {
		return -2;
	}
	
	int addr = 0x08;
	if (ioctl(handle, I2C_SLAVE, addr) < 0) {
		return -3;
	}

	return handle;
}

void arduinoHallSensor_get_counts(ArduinoHallSensor handle, char* counts){

	read(handle, counts, 2);
}

void arduinoHallSensor_reset_counts(ArduinoHallSensor handle){
	char blackHole[2];
	read(handle, blackHole, 2);
}
