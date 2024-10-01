#include <iostream>

using namespace std;


int countChars(string s);
int returnHello();

int countChars(string s) {
	cout << sizeof(s) << endl;
	cout << sizeof(s[0]) << endl;
	int size = sizeof(s)/sizeof(s[0]);
	size = returnHello();
	return size;
}


int returnHello() {
	return 13;
}

int main() {
	
	cout << "====================POINTERS=====================" << endl;
	int age = 17;
	int *pAge = &age;					// stores the adress to age in the pointer pAge

	cout << sizeof(age) << endl;

	cout << "age: " << age << endl;		// gives the value in age
	cout << "&age: " << &age << endl;	// Adress to age
	cout << "pAge: " << pAge << endl;	// shows the adress to age, which we stored on line 25
	cout << "&pAge: " << &pAge << endl;	// adress to the pointer pAge
	cout << "*pAge: " << *pAge << endl;	// shows the value that is stored in the memory adress in pAge


	cout << "=================MORE POINTERS========================" << endl;
	
	long number = 133113;
	cout << "number: " << number << endl;
	cout << "&number: " << &number << endl;
	
	long *pNumber;
	cout << "pNumber: " << pNumber << endl;
	pNumber = &number;			// &number kommer från en teknisk specifikation egentligen.
	cout << "pNumber: " << pNumber << endl;
	cout << "*pNumber: " << *pNumber << endl;
	
	
	
	int i = 40;
	int *pI = &i;
	cout << "i: " << i << endl;
	cout << "pI: " << pI << endl;
	cout << "*pI: " << *pI << endl << endl;

	cout << "=================PEKARARITMETIK========================" << endl;

	string str = "Hello world!";
	char *pStr = &str[0];
	cout << "str: " << str << endl;
	cout << "pStr: " << pStr << endl;
	cout << "*pStr: " << *pStr << endl;
	
	
	cout << "*pStr: " << *pStr << endl;
	// pekararitmetik
	*pStr++;
	cout << "*pStr: " << *pStr << endl;
	
	while(*pStr != '\0') {			// \0 = null terminator
		cout << *pStr;
		*pStr++;
	}
	
	
	string s = "Hello world!";
	int count = countChars(s);
	cout << "length: " << count << endl;
	
	return 0;		// Detta skall vara där! INGA undantag! 
}

