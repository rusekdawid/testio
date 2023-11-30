#include "ErrorManager.h"
#include <Arduino.h>

void ErrorManager::handleError(const std::string& error) {
    Serial.println("Error: " + error);
    // Tutaj możesz dodać dodatkową logikę obsługi błędów
}