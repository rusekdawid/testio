#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor() : sensors(&oneWire) {}

void TemperatureSensor::setup() {
    sensors.begin();
}

float TemperatureSensor::readTemperature() {
    sensors.requestTemperatures();
    float temperatureC = sensors.getTempCByIndex(0);

    if (temperatureC == DEVICE_DISCONNECTED_C) {
        throw std::runtime_error("Temperature sensor disconnected");
    }

    return temperatureC;
}
// Path: WiFiModule.cpp