#pragma once
#include "lightSensor.h"

typedef enum {
	autoMatic = 0,
	manual
}mode;

class lightSystem
{
private:
	int mode;

public:
	lightSenSor sensor;

	void changeMode(mode);
	virtual void update() = 0;

};

class headLightSystem : public lightSystem {

};

class roomLightSystem : public lightSystem {

};

