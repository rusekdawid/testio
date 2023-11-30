#include "CounterModule.h"
#include <Arduino.h>

const int gasCounterPin = 2;   // Przykładowy pin dla licznika gazu
const int waterCounterPin = 3; // Przykładowy pin dla licznika wody
const int electricCounterPin = 4; // Przykładowy pin dla licznika elektryczności

void CounterModule::setup() {
    pinMode(gasCounterPin, INPUT);
    pinMode(waterCounterPin, INPUT);
    pinMode(electricCounterPin, INPUT);
}

long CounterModule::readGas() {
    return pulseIn(gasCounterPin, HIGH);
}

long CounterModule::readWater() {
    return pulseIn(waterCounterPin, HIGH);
}

long CounterModule::readElectricity() {
    return pulseIn(electricCounterPin, HIGH);
}
