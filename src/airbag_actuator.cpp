#include "airbag_actuator.h"
#include <cstdio>

airbag_actuator::airbag_actuator()
    : port(0), pin(0), deployed(0)
{
}

airbag_actuator::airbag_actuator(int _port, int _pin)
    : port(_port), pin(_pin), deployed(0)
{
}

airbag_actuator::~airbag_actuator()
{
}

int airbag_actuator::Init(int port, int pin)
{
    (void)port;
    (void)pin;
    // init actuator hardware
    return 0;
}

void airbag_actuator::Operate(int impact)
{
    deployed = impact ? 1 : 0;

    if (deployed)
        printf("Airbag deployed!\n");
    else
        printf("Airbag not deployed.\n");
}
