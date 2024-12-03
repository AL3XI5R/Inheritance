#include "car.h"
#include <iostream>
using namespace std;

Car::Car() : Vehicle(), numDoors(0) {}

Car::Car(string manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of doors: " << numDoors << endl;
}
