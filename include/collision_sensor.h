#pragma once

class collision_sensor
{
  int impact; 
  int port;
  int pin;
  
  collision_sensor();
  collision_sensor(int _port, int _pin);
  virtual ~collision_sensor(); 

  int Init(int port, int pin);
  int getData(); // 1 , 0
};

