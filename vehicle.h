#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(); 
    Vehicle(string manufacturer, int yearBuilt);

    string getManufacturer() const;
    void setManufacturer(string manufacturer);

    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);

    virtual void displayInfo() const;
};

#endif
