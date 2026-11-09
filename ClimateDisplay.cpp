#include "ClimateDisplay.h"
#include <iostream>
void ClimateDisplay::update(double temperature, double humidity) {
    std::cout << "Display: " << temperature << " C, " << humidity << "% humidity\n";
}
