#include "Motorcycle.h"

Motorcycle::Motorcycle(int speed, int fuel) : Vehicle(speed, fuel) {}

void Motorcycle::sound() {
	std::cout << "Motorcykeln låter: BRAaaa!!!" << std::endl;
}