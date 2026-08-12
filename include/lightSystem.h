#pragma once

#include "LightSensor.h"

enum class Mode
{
    Automatic,
    Manual
};

class LightSystem
{
protected:
    Mode mode_ = Mode::Automatic;
    bool isOn_ = false;
    LightSensor& sensor_;

public:
     LightSystem(LightSensor& sensor);
    virtual ~LightSystem() = default;

    void changeMode(Mode mode);
    bool isOn() const;

    virtual void update() = 0;
};

class HeadLightSystem : public LightSystem
{
public:
    using LightSystem::LightSystem;

    void update() override;
};

class RoomLightSystem : public LightSystem
{
public:
    using LightSystem::LightSystem;

    void update() override;
};