#include "truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle(), towingCapacity(0) {}

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing capacity: " << towingCapacity << endl;
}
