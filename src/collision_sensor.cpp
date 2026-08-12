#include "collision_sensor.h"

collision_sensor::collision_sensor()
{ 
}

collision_sensor::collision_sensor(int _port, int _pin)
{

}

collision_sensor::~collision_sensor()
{ 
}
 
int collision_sensor::Init(int port, int pin) 
{
  (void)port;
  (void)pin;
  // init sensor hardware
}

void collision_sensor::setImpact(int impact)
{
	  this->impact = impact;
}

int collision_sensor::getData() 
{
  return impact;
}
