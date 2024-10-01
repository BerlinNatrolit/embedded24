#include <iostream>
#include <stdint.h>

using namespace std;


int add(int, int);
int sub(int a, int b);
float division(int numerator, int denominator);
float division(float numerator, float denominator);
float division(int numerator, float denominator);
float division(float numerator, int denominator);
int incrementAge();

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

int main() {
	int a = 10;
	int b = 20;
	int8_t var = 165;
	
	int addition = add(a, b);
	cout << addition << endl;
	
	int substraction = sub(a, b);
	cout << substraction << endl;
	
	float quotient = division(a, b);
	cout << quotient << endl;

	float quotient2 = division((float)a, (float)b);
	cout << quotient2 << endl;

	float quotient3 = division(a, (float)b);
	cout << quotient3 << endl;
	
	float quotient4 = division((float)a, b);
	cout << quotient4 << endl;
	
	cerr << "This is a very nasty little error message that has been produced" << endl;

	cout << incrementAge() << endl;
	cout << incrementAge() << endl;
	cout << incrementAge() << endl;
	cout << incrementAge() << endl;
	cout << incrementAge() << endl;
	static int age;
	cout << age;
	
	
	return 0;
}