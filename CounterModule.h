#ifndef COUNTERMODULE_H
#define COUNTERMODULE_H

class CounterModule {
public:
    void setup();
    long readGas();
    long readWater();
    long readElectricity();
};

#endif
