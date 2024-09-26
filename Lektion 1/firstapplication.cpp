#include <iostream>
#include <Climits>
#include <cmath>

using namespace std;

int main() {
	string name;
	int age = 0;
	float flyttal = 0;
	bool b = false;
	
	/*
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Hello " << name << "!" << endl;
	cout << "How old are you?";
	cin >> age;
	cout << "Oh you are " << age << " old?";
	*/
	
	cout << "Flyttal: " << flyttal << endl;
	cout << "string: " << name << endl;
	cout << "bool: " << b << endl;
	
	cout << "sizeof age " << sizeof(age) << endl;

	unsigned int max = 2147483646;
	long lmax = max*7;
	long long llmax;
	unsigned long long ullmax;
	cout << "max " << max << endl;
	max++;
	cout << "max " << max << endl;
	max++;
	cout << "max " << max << endl;
	max = -8;
	cout << "max " << max << endl;
	cout << "lmax " << lmax << endl;
	
	cout << "unsigned long long max: " << ULLONG_MAX << endl;
	
	
	long l = 0;
	int i = 0;
	
	cout << "long: " << sizeof(l) << endl;
	cout << "int: " << sizeof(i) << endl;
	
	cout << "PI: " << M_PI << endl;
		
	return 0;
}