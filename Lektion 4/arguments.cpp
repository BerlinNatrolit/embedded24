// Very short example of how to read arguments from console when starting application

#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    for(int i=0;i<argc;i++) {
        cout << argv[i] << endl;
    }

    return 0;
}