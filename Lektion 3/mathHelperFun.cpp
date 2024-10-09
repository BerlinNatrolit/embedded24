#include <iostream>
#include "mathHelperFun.h"

using namespace std;

int add(int a, int b) {
	return a+b;
}

int sub(int a, int b) {
	return a-b;
}

float division(int numerator, int denominator) {
	cout << "heltal" << endl;
	return (float)numerator/(float)denominator;
}

float division(float numerator, float denominator) {
	cout << "flyttal" << endl;
	return numerator/denominator;
}

float division(int numerator, float denominator) {
	cout << "heltal, flyttal" << endl;
	return numerator/denominator;
}

float division(float numerator, int denominator) {
	cout << "flyttal, heltal" << endl;
	return numerator/denominator;
}

int incrementAge() {
	static int age = 0;
	age++;
	return age;
}