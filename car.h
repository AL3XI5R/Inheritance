#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car();
    Car(string manufacturer, int yearBuilt, int numDoors);

    int getNumDoors() const;
    void setNumDoors(int numDoors);

    void displayInfo() const override;   //OVERRIDE PARA SEGURIDAD, LEGIBILIDAD Y PROTECCIÓN
};

#endif
