#include "collision_sensor.h"

collision_sensor::collision_sensor()
{ 
}

collision_sensor::collision_sensor(int _port, int _pin) : port(_port), pin(_pin)
{

}

collision_sensor::~collision_sensor()
{ 
}
 
int collision_sensor::Init(int port, int pin) 
{
  this.port = port;
  this.pin = pin;
  // init sensor hardware
}

int collision_sensor::getData() 
{
  return impact;
}
