#ifndef PARENTCLASS_H
#define PARENTCLASS_H

#include <iostream>

using namespace std;  
  
class ParentClass {  
    
    private:  
        int _defaultInt;

    public:  
        ParentClass(int defaultInt);        
        
        virtual int getInt();   
        virtual int printBalance() = 0;  
};
#endif
