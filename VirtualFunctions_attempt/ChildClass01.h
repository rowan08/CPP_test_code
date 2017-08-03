#ifndef CHILDCLASS01_H
#define CHILDCLASS01_H

#include "ParentClass.h"
#include <iostream>

using namespace std;

class ChildClass01 : public ParentClass {  
    
    private:
        int _childNumber;

    public:  
        ChildClass01(int defaultInt, int childNumber);
        
        int printBalance();
};

#endif
