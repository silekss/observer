#include "Heater.h"
#include <iostream>
void Heater::update(double temperature, double) {
    std::cout << "Heater: " << (temperature < 19 ? "ON (heating)" : "OFF") << "\n";
}
