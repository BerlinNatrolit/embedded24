#include "Motorcycle.h"

Motorcycle::Motorcycle(int speed, int fuel) : Vehicle(speed, fuel) {}

void Motorcycle::sound() {
	std::cout << "Motorcykeln l�ter: BRAaaa!!!" << std::endl;
}