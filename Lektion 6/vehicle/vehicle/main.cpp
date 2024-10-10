#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Boat.h"
#include "PoliceCar.h"

using namespace std;

int main() {
    Vehicle* vehicle_list[4];

    vehicle_list[0] = new Car(0, 50);
    vehicle_list[1] = new Motorcycle(0, 18);
    vehicle_list[2] = new Boat(0, 90);
    vehicle_list[3] = new PoliceCar(0, 100);
    
    for (int i = 0; i < 4; i++) {
        vehicle_list[i]->accelerate(5);
        vehicle_list[i]->decelerate(5);
        vehicle_list[i]->refuel(5);
        vehicle_list[i]->sound();
    }

    for (int i = 0; i < 4; i++) {
        delete vehicle_list[i];
    }

    return 0;
}
