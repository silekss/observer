#pragma once
#include "IObserver.h"
class ClimateDisplay : public IObserver {
public:
    void update(double temperature, double humidity) override;
};
