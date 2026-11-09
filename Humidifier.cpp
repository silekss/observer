#include "Humidifier.h"
#include <iostream>
void Humidifier::update(double, double humidity) {
    std::cout << "Humidifier: " << (humidity < 40 ? "ON" : "OFF") << "\n";
}
