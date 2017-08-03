#include "ChildClass01.h"

using namespace std;

ChildClass01::ChildClass01(int defaultInt, int childNumber) : 
    ParentClass(defaultInt) {
        _childNumber = childNumber;        
    }

int ChildClass01::printBalance() {
    return getInt() * _childNumber; 
}

