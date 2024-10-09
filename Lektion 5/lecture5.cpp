// example of copy by value, copy by reference and pointers as arguments.
// there is also some bitwise operations.

#include <iostream>
#include <fstream>

using namespace std;

class vector {
public:
    int x;
    int y;

    vector() { }

    vector(int x, int y) {
        this->x = x;
        this->y = y;
    }

    vector operator+(vector v) {
        vector tempVector;
        tempVector.x = this->x + v.x;
        tempVector.y = this->y + v.y;
        return tempVector;
    }
};

void printVector(vector v1) {
    cout << "(X:Y) " << "(" << v1.x << ":" << v1.y << ")" << endl;;
}

inline void vectorMaths(vector & v1) {
    v1.x = v1.x << 1;
    v1.y = v1.y << 1;
}

void vectorMaths(vector *v1) {
    v1->x = v1->x*2;
    v1->y = v1->y*2;
}

int main() {
    int a = 8;
    int b = 8;

    a = a/2;
    b = b>>1;

    cout << a << endl;
    cout << b << endl;

    a = a*2;
    b = b << 1;

    a = a*4;
    b = b << 2;

    cout << a << endl;
    cout << b << endl;

    cout << "================================" << endl;
    int x = 2;      // 0000 0010
    int y = 5;      // 0000 0101

    int* df = &x;

    cout << x << " & " << y << ":  " << ((x & y) ? "true" : "false") << endl;
    cout << x << " && " << y << ": " << ((x && y) ? "true" : "false") << endl;

    vector v1(2,3);
    vector v2(3,-4);

    printVector(v1);
    printVector(v2);

    vectorMaths(v1);
    vectorMaths(v2);
    
    vectorMaths(&v1);
    
    printVector(v1);

    // vector v3(v1.x+v2.x, v1.y+v2.y);
    vector v3 = v1+v2;
    printVector(v1+v2);


    return 0;
}