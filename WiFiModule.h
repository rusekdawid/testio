#ifndef WIFIMODULE_H
#define WIFIMODULE_H

#include <WiFi.h>

class WiFiModule {
public:
    void connect(const char* ssid, const char* password);
};

#endif
