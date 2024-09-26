#include <iostream>
#include <string>

using namespace std;


int main() {

    const float PI = 3.1415;
    // Fungerar ej PI = 1.23;

    int a = 7;
    int b = +7;
    int c = -7;
    int d = +(-7);
    int e = -(-7);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;


    cout << a++ << endl;
    cout << ++b << endl;


    cout << "========================" << endl;
    bool t = true;
    bool f = false;

    cout << (t == f) << endl;
    cout << (t == t) << endl;
    cout << (f == f) << endl;

    cout << "f && f: " << (f && f) << endl;
    cout << "f & f: " << (f & f) << endl;
    cout << "t && t: " << (t && t) << endl;
    cout << "t & t: " << (t & t) << endl;
    cout << "11 & 14: " << (11 & 14) << endl;           // Denna raden är bara till för att ge er mardrömmar

    cout << "!false: " << !false << endl;
    cout << "false || true: " << (false || true) << endl;
    cout << "62 | 63: " << (62 | 63) << endl;               // mardrömmar
    cout << "64 | 63: " << (64 | 63) << endl;

    cout << (true || false ? "true" : "false") << endl;

    cout << "sizeof(a): " << sizeof(a) << endl;

    // <boolskt uttryck> ? <svar om sant> : <svar om falskt> 
    cout << (a > 40 ? "gammal" : "ung");

    if (a > 40) {
        if (b < 15) {
            cout << "ung-gammal" << endl;
        }
        cout << "gammal" << endl;
    } else if (a < 10) {
        cout << "barn" << endl;
    } else {
        cout << "ung" << endl;
    }

    if (c < 0)
        cout << "c is negative";
    else
        cout << "c is positive";

    if (c < 0) {
        cout << "c is negative";
    } else {
        cout << "c is positive";
    }
    cout << endl;

    d = 2;
    switch(d) {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
        case 3:
            cout << "3" << endl;
        case 4:
            cout << "4" << endl;
        case 5:
            cout << "5" << endl;
            break;
        case 6:
            cout << "6" << endl;
            break;
        case 7:
            cout << "7" << endl;
            break;
        case 8:
            cout << "8" << endl;
            break;
        default:
            cout << "something else" << endl;
    }

    cout << "=====================================" << endl;
    
    for(int i=0;i<=20;i++) {
        cout << i << endl;;;
        i = i + 3;

        for(int j=0;j<10;j++) {
            cout << j;
        }
    }
    cout << endl;

    int small = 3;
    int big = 8;
    while(small != big) {
        cout << small++ << endl;
    }

    cout << "============BREAK CONTINUE=================" << endl;

    for(int i=0;i<10;i++) {
        if(i == 3)
            continue;
        if(i==8)
            break;
        cout << i << endl;
    }

    cout << "===============ARRAYER========================" << endl;
    int prices[5] = {1,2,3,4,5};
    float fprices[5];

    cout << prices[0] << endl;
    cout << prices[2] << endl;
    cout << prices[4] << endl;

    prices[0] = 45;
    cout << prices[0] << endl;

    int size = sizeof(prices)/sizeof(prices[0]);

    for(int i=0;i<size+20;i++) {
        cout << "index: " << i << ": " << prices[i] << endl;
    }

    prices[8] = 32;
    cout << "prices 8" << prices[8] << endl;

    cout << "=======================STRING======================" << endl;

    string s = "hello world!";
    cout << s << endl;
    cout << s[3] << endl;

    string st = "sö ";
    char ch = (char)206;

    cout << st << endl;
    cout << "st " << sizeof(st) << endl;
    cout << "ch " << sizeof(ch) << endl;
    cout << ch << endl;


    string a1 = "hello world!!!";
    string a2 = a1;

    cout << "a2: " <<  a2 << endl;

    return 0;
}