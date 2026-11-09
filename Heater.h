#pragma once
#include "IObserver.h"
class Heater : public IObserver {
public:
    void update(double temperature, double humidity) override;
};
