#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle {
public:
	Motorcycle(int speed, int fuel);

	void sound() override;
};

