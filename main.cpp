//ALEXIS ROJAS
//CIS 1202.N01

#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main() {
    cout << "\n\nVEHICLES PROGRAM" << endl << endl;


    //---------
    // VEHICLE
    //---------
    cout << "Vehicle:" << endl;
    string manufacturer;
    int yearBuilt;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Information:" << endl;
    vehicle.displayInfo();

    
    //---------
    //  CAR
    //---------
    cout << "\nCar:" << endl;
    int numDoors;
    cout << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> numDoors;

    Car car(manufacturer, yearBuilt, numDoors);
    cout << "Vehicle Information:" << endl;
    car.displayInfo();

    //---------
    //  TRUCK
    //---------
    cout << "\nTruck:" << endl;
    int towingCapacity;
    cout << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "Vehicle Information:" << endl;
    truck.displayInfo();

    return 0;
}
