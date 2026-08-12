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

int collision_sensor::getData() 
{
  return impact;
}
