// header of class person.

#pragma once

#include <iostream>

using namespace std;

class Person {
    private:
        string name;
        string ssn;

    public:
        Person();
        Person(string name, string ssn);

        string getPerson();
};
