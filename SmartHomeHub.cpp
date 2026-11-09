#include "SmartHomeHub.h"
#include "IObserver.h"
#include <algorithm>
#include <iostream>
void SmartHomeHub::attach(IObserver* observer) {
    if (observer && std::find(observers.begin(), observers.end(), observer) == observers.end()) {
        observers.push_back(observer);
    }
}
void SmartHomeHub::detach(IObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}
void SmartHomeHub::notify() {
    // A snapshot allows observers to unsubscribe during notification.
    auto current = observers;
    for (auto* observer : current) {
        if (std::find(observers.begin(), observers.end(), observer) != observers.end())
            observer->update(temperature, humidity);
    }
}
void SmartHomeHub::setClimate(double newTemperature, double newHumidity) {
    if (newHumidity < 0 || newHumidity > 100) {
        std::cout << "Invalid humidity value!\n";
        return;
    }
    temperature = newTemperature;
    humidity = newHumidity;
    std::cout << "\nHub: temperature = " << temperature
              << " C, humidity = " << humidity << "%\n";
    notify();
}
