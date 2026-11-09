#pragma once
#include "IObserver.h"
class Humidifier : public IObserver {
public:
    void update(double temperature, double humidity) override;
};
