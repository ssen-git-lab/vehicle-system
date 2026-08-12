#pragma once

#include "RainSensor.h"

class WiperSystem
{
private:
    RainSensor& rainSensor;
    bool wiperOn;

public:
    WiperSystem(RainSensor& sensor);

    void update();
    void turnOn();
    void turnOff();
};