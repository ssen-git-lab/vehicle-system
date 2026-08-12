#pragma once

class collision_sensor
{
private:
  int impact; 
  int port;
  int pin;
  
public:
  collision_sensor();
  collision_sensor(int _port, int _pin);
  virtual ~collision_sensor(); 

  int Init(int port, int pin);
  int getData();
};

