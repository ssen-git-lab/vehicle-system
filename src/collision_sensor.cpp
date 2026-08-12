#include "collision_sensor.h"
#include <cstdlib>

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
int collision_sensor::readSensor()
{ 
  try
  {
    // HAL_GPIO .....  
    this->impact = rand() % 2; 
  }
  catch (int n)
  {
    return 0;
  }

  return 1;
}

int collision_sensor::getData()
{
  return impact;
}
