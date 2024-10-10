#include "PoliceCar.h"

PoliceCar::PoliceCar(int speed = 0, int fuel = 0) : Car(speed, fuel) {}

void PoliceCar::sound() {
	Car::sound();
	std::cout << "WEEEUUUU WWEEEEUUUU!!!" << std::endl;
}