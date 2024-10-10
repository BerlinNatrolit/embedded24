#include "Boat.h"

Boat::Boat(int speed = 0, int fuel = 0) : Vehicle(speed, fuel){ }

void Boat::sound() {
	std::cout << "Båten låter: dunk dunk dunk!!!!" << std::endl;
}