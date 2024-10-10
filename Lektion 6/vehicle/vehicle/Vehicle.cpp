#include "Vehicle.h"

Vehicle::Vehicle(int speed = 0, int fuel = 0) {
	this->speed = speed;
	this->fuel = fuel;
}

void Vehicle::accelerate(int dV) {
	speed += dV;
	fuel -= 2;
	std::cout << "Nu gasar vi. Hastighet: " << speed << " km/h. Bränsle: " << fuel << std::endl;
}

void Vehicle::decelerate(int dV) {
	speed -= dV;
	if (speed < 0) {
		speed = 0;
	}
	std::cout << "Nu bromsar vi. Hastighet: " << speed << " km/h." << std::endl;
}

void Vehicle::refuel(int liters) {
	fuel += liters;
	if (fuel > 100) {
		fuel = 100;
		std::cout << "PANIIIIIIIK!!!!! SOPPARN RINNER ÖVER!!!!!!!!!" << std::endl;
	}
	std::cout << "Du har tankat och har nu: " << fuel << "liter i bilen." << std::endl;
}

