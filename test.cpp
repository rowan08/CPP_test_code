//#include "ChildClass01.h"
#include "ChildClass01.h"
#include <iostream>

using namespace std;

class MyChild: public ChildClass01 {

    public:
        MyChild(): ChildClass01(2, 2) {};
};

int main(){
    
    MyChild myDemoObject;   
    cout << myDemoObject.multiplyByClass() << endl;

    return 0;
}
