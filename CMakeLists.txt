cmake_minimum_required(VERSION 3.26)
project(DR)

set(CMAKE_CXX_STANDARD 14)

add_executable(DR
        main.cpp
        TemperatureSensor.cpp
        ErrorManager.cpp
        WiFiModule.cpp
        CounterModule.h
        CounterModule.cpp)
