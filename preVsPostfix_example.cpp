#include <iostream>

using namespace std;

int main() {

    for (int i=0, a=0; i < 10; a = i++) {
        cout << i << a << " ";
    }

    cout << endl << endl;
    
    for (int j=0, a=0; j < 10; a = ++j) {
        cout << j << a << " ";
    }

    cout << endl << endl;

    return 0;
}