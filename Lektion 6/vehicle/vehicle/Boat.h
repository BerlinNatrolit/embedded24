#pragma once
#include "Vehicle.h"
class Boat : public Vehicle {
public:
	Boat(int speed, int fuel);

	void sound() override;
};

