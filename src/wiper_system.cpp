#include "wiper_system.h"

WiperSystem::WiperSystem(RainSensor& sensor)
    : rainSensor(sensor),
    wiperOn(false)
{
}

void WiperSystem::update()
{
    int rainPer = rainSensor.transferRainPer();

    if (rainPer > 0)
    {
        turnOn();
    }
    else
    {
        turnOff();
    }
}

void WiperSystem::turnOn()
{
    if (!wiperOn)
    {
        wiperOn = true;

        // 와이퍼 작동
    }
}

void WiperSystem::turnOff()
{
    if (wiperOn)
    {
        wiperOn = false;

        // 와이퍼 정지
    }
}