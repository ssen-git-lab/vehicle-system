#include <iostream>
#include <random>
#include <thread>
#include <chrono>

#include <collision_sensor.h>
#include <LightSensor.h>
#include <RainSensor.h>

using namespace std::chrono_literals;

int random(int min, int max)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}

int main()
{
	collision_sensor* collisionSensor = new collision_sensor(1, 1);
    LightSensor* lightSensor = new LightSensor(2);
    RainSensor* rainSensor = new RainSensor();

    while (true)
    {
		lightSensor->update(random(0, 100));
		rainSensor->setRain(random(0, 10));

		std::this_thread::sleep_for(1s);
    }
}
