#pragma once
#include "Car.h"
class PoliceCar : public Car {
public:
	PoliceCar(int speed, int fuel);
	
	void sound() override;
};


