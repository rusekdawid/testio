#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include <DallasTemperature.h>

class TemperatureSensor {
private:
    DallasTemperature sensors;

public:
    TemperatureSensor();
    void setup();
    float readTemperature();
};

#endif // TEMPERATURESENSOR_H
