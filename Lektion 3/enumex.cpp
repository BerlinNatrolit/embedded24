// Example of enumeration types in c++

#include <iostream>

using namespace std;

typedef enum {
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
} WEEKDAY;

int main() {
	WEEKDAY currentDay = WEEKDAY::tuesday;
	
	if (currentDay == WEEKDAY::tuesday) {
		cout << "tuesday" << endl;
	}
	cout << "Weekday: " << WEEKDAY::thursday << endl;
		
	return 0;
}