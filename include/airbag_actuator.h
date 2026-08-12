#pragma once

class airbag_actuator
{
public:
    airbag_actuator();
    airbag_actuator(int _port, int _pin);
    virtual ~airbag_actuator();

    int Init(int port, int pin);
    void Operate(int impact);

private:
    int port;
    int pin;
    int deployed;
};
