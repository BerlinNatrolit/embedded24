#include "Car.h"

Car::Car(int speed, int fuel) : Vehicle(speed, fuel) {}

void Car::sound() {
	std::cout << "Bilen l�ter: VROOOM!!!" << std::endl;
}