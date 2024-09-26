#include <iostream>
#include <math.h>

using namespace std;

void rectangle();
void tube();
void triangle();
int multiplication(int a, int b);


void rectangle() {
	// Area of rectangle
	///////////////////////////////////////////////////////////////
	float width = 0;
	float height = 0;
	
	cout << "please enter width of rectangle: ";
	cin >> width;
	cout << "please enter height of rectangle: ";
	cin >> height;
	
	cout << "area of rectangle is " << width *  height << " units" << endl;
}


void tube() {
	// Volumen of a tube
	//////////////////////////////////////////////////////////////
	float height = 0;
	int radius = 0;
	const float PI = 3.1415926;
	
	cout << "please enter radius of triangle: ";
	cin >> radius;
	cout << "please enter height of triangle: ";
	cin >> height;
		
	int volume = PI * radius * radius * height;
	cout << "volume of the tube is " << volume << endl;
}


/*********************************************************
* a function that multiplies two values through a for loop.
* jada
* jada
* jada
**********************************************************/
int multiplication(int a, int b) {
	int prod = 0;
	
	for(int i=0;i<a;i++) {
		prod = prod+b;
	}
	
	return prod;
}



int main() {
	rectangle();
	triangle();
	tube();
	// cout << multiplication(3, 4) << endl;
	
	return 0;
}

void triangle() {
	// Triangle calculations
	///////////////////////////////////////////////////////////////
	float width = 0;
	float height = 0;
	
	cout << "please enter width of triangle: ";
	cin >> width;
	cout << "please enter height of triangle: ";
	cin >> height;
	
	cout << "area of rectangle is " << (float)width *  (float)height / 2 << " units";
	
	float hypotenusa = sqrt(width*width+height*height);
	cout << "perimiter of rectangle is " << width + height + hypotenusa << endl;

}