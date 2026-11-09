#include "AirConditioner.h"
#include <iostream>
void AirConditioner::update(double temperature, double) {
    std::cout << "Air conditioner: " << (temperature > 26 ? "ON (cooling)" : "OFF") << "\n";
}
