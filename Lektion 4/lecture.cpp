#include <iostream>

using namespace std;

class Person {
public:
  int age;
  string name;
    
private:
  int weight;

public:
  Person() {
    age = 0;
    name = "";
    weight = 0;
    cout << "Running default constructor!" << endl;
  }
  Person(int age, string name, int weight) {
    this->age = age;      // when using this you are referencing a pointer according to c++, so use -> instead of .
    this->name = name;
    this->weight = weight;
    cout << "Running param constructor!" << endl;
  }

  void printPerson() {
    cout << name << " is "  << age << " and weigh "<< weight << " kg" << endl ;
  }
};

class realPerson {
private:
  int age;
  string name;
  int weight;

public:
  realPerson() {
    age = 0;
    name = "";
    weight = 0;
    cout << "Running default constructor!" << endl;
  }
  realPerson(int age, string name, int weight) {
    this->age = age;      // when using this you are referencing a pointer according to c++, so use -> instead of .
    this->name = name;
    this->weight = weight;
    cout << "Running param constructor!" << endl;
  }
  ~realPerson() {
    cout << "Destructor is running!" << endl;
  }

  void setAge(int newAge) {
    if (newAge < 0)
      newAge = 0;
    if (newAge > 120)
      newAge = 120;
    age = newAge;
  }
  void setName(string newName) {
    name = newName;
  }
  void setWeight(int newWeight) {
    weight = newWeight;
  }

  int getAge() {
    return age;
  }
  int getAgeInDogYears() {
    return age * 7;
  }
  string getName() {
    return name;
  }

  void printPerson() {
    cout << name << " is "  << age << " and weigh "<< weight << " kg" << endl ;
  }
};

void testFunction() {
  cout << "inside test function" << endl;
  realPerson person(8, "Skye", 25);
  cout << "we are now runnign some code" << endl;
}

int main() {
  cout << "Hello world!" << endl;

  realPerson p1(29, "Robin", 95);
  p1.printPerson();
  p1.setName("Magnus");

/*
  Person p2;
  p2.age = 38;
  p2.name = "Ted";

  p2.printPerson();
  */

  testFunction();

  return 0;
}
