#include "LightSystem.h"

LightSystem::LightSystem(LightSensor& sensor)
    : sensor_(sensor)
{
}

void LightSystem::changeMode(Mode mode)
{
    mode_ = mode;
}

bool LightSystem::isOn() const
{
    return isOn_;
}

void HeadLightSystem::update()
{
    if (mode_ != Mode::Automatic)
        return;

    const int lux = sensor_.getLux();
    isOn_ = lux <= 300;
}

void RoomLightSystem::update()
{
    if (mode_ != Mode::Automatic)
        return;

    const int lux = sensor_.getLux();
    isOn_ = lux <= 100;
}