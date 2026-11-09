#pragma once
#include "ISubject.h"
#include <vector>
class IObserver;
class SmartHomeHub : public ISubject {
private:
    std::vector<IObserver*> observers;
    double temperature = 22.0;
    double humidity = 45.0;
public:
    void attach(IObserver* observer) override;
    void detach(IObserver* observer) override;
    void notify() override;
    void setClimate(double newTemperature, double newHumidity);
};
