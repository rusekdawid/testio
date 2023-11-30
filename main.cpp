#include <Arduino.h>
#include "TemperatureSensor.h"
#include "WiFiModule.h"
#include "ErrorManager.h"
#include "CounterModule.h"

TemperatureSensor tempSensor;
WiFiModule wifi;
ErrorManager errorManager;
CounterModule counter;

void setup() {
    Serial.begin(115200);
    wifi.connect("your_SSID", "your_PASSWORD");
    tempSensor.setup();
    counter.setup();
}

void loop() {
    try {
        float temperature = tempSensor.readTemperature();
        long gas = counter.readGas();
        long water = counter.readWater();
        long electricity = counter.readElectricity();

        Serial.print("Temperature: "); Serial.print(temperature); Serial.println(" C");
        Serial.print("Gas Counter: "); Serial.println(gas);
        Serial.print("Water Counter: "); Serial.println(water);
        Serial.print("Electricity Counter: "); Serial.println(electricity);

        delay(5000); // Czekaj 5 sekund przed kolejnym pomiarem
    } catch (const std::exception& e) {
        errorManager.handleError(e.what());
    }
}
