// Header for class car.

#pragma once

#include <iostream>

using namespace std;

class Car {
    private:
        string registrationNumber;
        string manufacturer;
        string model;

    public:
        Car();
        Car(string regNr, string manufacturer, string model);
        void setRegistrationNumber(string regNr);
        void setManufacturer(string manufacturer);
        void setModel(string model);

        string getVehicle();
};
