// Implementation of class car.

#include "car.h"

Car::Car() {
    registrationNumber = "";
    manufacturer = "";
    model = "";
}

Car::Car(string regNr, string manufacturer, string model) {
    this->registrationNumber = regNr;
    this->manufacturer = manufacturer;
    this->model = model;
}

void Car::setRegistrationNumber(string regNr) {
    this->registrationNumber = regNr;
}

void Car::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

void Car::setModel(string model) {
    this->model = model;
}

string Car::getVehicle() {
    return registrationNumber + ": " + manufacturer + " " + model;
}
