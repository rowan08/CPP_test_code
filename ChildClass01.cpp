#include "ChildClass01.h"

using namespace std;

ChildClass01::ChildClass01(int defaultInt, int childNumber) : 
    ParentClass(defaultInt) {
        _childNumber = childNumber;        
    }

int PrintBalance() {
    return GetInt() * _childNumber; 
}

