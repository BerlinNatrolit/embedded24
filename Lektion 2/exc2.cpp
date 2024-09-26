#include <iostream>

using namespace std;

int main() {

    const int MSK = 15;
    const int TSK = 5;

    int ml = 0;

    cin >> ml;

    int msk = ml/15;
    ml = ml % MSK;

    int tsk = ml/TSK;
    ml = ml % TSK;

    cout << "Matskedar: " << msk << endl;
    cout << "Teskedar: " << tsk << endl;
    cout << "Rest: " << ml << endl;

    return 0;
}