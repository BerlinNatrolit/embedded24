// Implementation of class person.

#include "person.h"

Person::Person() {
    name = "";
    ssn = "";
}

Person::Person(string name, string ssn) {
    this->name = name;
    this->ssn = ssn;
}

string Person::getPerson() {
    return name + ": " + ssn;
}
