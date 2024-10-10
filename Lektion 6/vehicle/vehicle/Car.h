#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
	Car(int speed, int fuel);

	void sound() override;
};

