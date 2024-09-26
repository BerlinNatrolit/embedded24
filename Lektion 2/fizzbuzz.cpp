#include <iostream>

using namespace std;

int main() {

    for(int i=1;i<=30;i++) {
        if(i%3 == 0) {
            cout << "Fizz";
        }
        else if(i%4 == 0) {
            cout << "Hello";
        }
        else if(i%5 == 0) {
            cout << "Buzz";
        }
        else if(i%10 == 0) {
            cout << "Red";
        }
        else if(i%3!=0 && i%5!=0 && i%4!=0 && i%10!=0) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}