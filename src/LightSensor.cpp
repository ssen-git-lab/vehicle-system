#include "LightSensor.h"
#include "LightSensor.h"

LightSensor::LightSensor(int pin)
	: pin(pin)
{
	setLuxFlux(0.0);
}

void LightSensor::setLuxFlux(double luxFlux)
{
	this->luxFlux = luxFlux;
	this->registance = 10000.0 / (luxFlux + 1.0);
}

void LightSensor::update(double luxFlux)
{
	setLuxFlux(luxFlux);
}

double LightSensor::getResistance() const
{
	return this->registance;
}
