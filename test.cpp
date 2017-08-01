#include "ChildClass01.h"
#include <iostream>

using namespace std;

int main() {  
     
    ChildClass01 *pChecking = new ChildClass01(100, 2);
    cout << pChecking->PrintBalance() << endl;

    return 0;
} 
