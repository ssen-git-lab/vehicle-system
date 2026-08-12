#include "RainSensor.h"

RainSensor::RainSensor() : rain_per(0) {};

void RainSensor::setRain(int rain) {
	rain_per = rain;
}

void RainSensor::transferRainPer() {
	//Wiper 시스템에게 rain_per를 송신
}