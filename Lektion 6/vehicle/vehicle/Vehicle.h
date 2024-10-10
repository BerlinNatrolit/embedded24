#pragma once
#include <iostream>

// Abstrakt klass Vehicle (pga. virtual sound())
class Vehicle {
protected:
	int speed;
	int fuel;

public:
	Vehicle(int speed, int fuel);
	void accelerate(int dV);		// dV = delta velocity = skillnad i hastighet
	void decelerate(int dV);		// dV = delta velocity = skillnad i hastighet
	void refuel(int liters);
	virtual void sound() = 0;		// virtuell funktion.
};
