#pragma once
class LightSensor
{
private:
	int pin;

	double luxFlux;
	double registance;

public:
	LightSensor(int pin);

private:
	void setLuxFlux(double luxFlux);

public:
	void update(double luxFlux);
	double getResistance() const;
};
