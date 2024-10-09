// using car, person, and driver in the code.

#include <iostream>
#include <cstring>

#include "person.h"
#include "car.h"
#include "driver.h"

using namespace std;

int main(int argc, char* argv[]) {
    string name = argv[1];
    string fname = argv[2];
    string fullName = name + " " + fname;
    cout << name << endl;
    cout << fname << endl;

    Person andreas(fullName, "848484-6363");
    Car bil("aaa 333", "Volvo", "EX90");
    Driver ad(andreas, bil);

    cout << ad.getDriver() << endl;

    return 0;
}