#include "SmartHomeHub.h"
#include "AirConditioner.h"
#include "Heater.h"
#include "Humidifier.h"
#include "ClimateDisplay.h"
#include <iostream>
int main() {
    SmartHomeHub hub;
    AirConditioner airConditioner;
    Heater heater;
    Humidifier humidifier;
    ClimateDisplay display;

    hub.attach(&airConditioner);
    hub.attach(&heater);
    hub.attach(&humidifier);
    hub.attach(&display);

    std::cout << "=== SMART HOME: OBSERVER ===\n";
    hub.setClimate(29, 35);
    hub.setClimate(16, 55);

    std::cout << "\n--- Disconnect air conditioner ---\n";
    hub.detach(&airConditioner);
    hub.setClimate(30, 30);

    std::cout << "\n--- Reconnect air conditioner ---\n";
    hub.attach(&airConditioner);
    hub.setClimate(28, 50);
    return 0;
}
