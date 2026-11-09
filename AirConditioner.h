#pragma once
#include "IObserver.h"
class AirConditioner : public IObserver {
public:
    void update(double temperature, double humidity) override;
};
