// Example of a virtual/abstract class

#include <iostream>
using namespace std;

// A shape
class Shape {
    public:
    // (pure) virtual function
    virtual int getArea() = 0;
    void setWidth(int w) {width = w;} 
    void setHeight(int h) {height = h;} 
protected:
    int width;
    int height;
};

// Rectangle extends shape.
class Rectangle: public Shape {
public:
    void printSomething() {
        cout << "hello from rect" << endl;
    }
    // implements virtual function getArea.
    int getArea() {
        return width*height;
    }
};

int main() {
    Rectangle rect;
    rect.setHeight(5);
    rect.setWidth(7);
    rect.printSomething();
    cout << rect.getArea();
    return 0;
}


