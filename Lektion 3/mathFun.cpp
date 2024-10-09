#include <iostream>
#include <stdint.h>
#include "mathHelperFun.h"
#include "mathSad.cpp"

using namespace std;


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
	cout << age << endl;
	cout << PI << endl;
	
	
	return 0;
}