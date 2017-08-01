#ifndef PARENTCLASS_H
#define PARENTCLASS_H

#include <iostream>

using namespace std;  
  
class ParentClass {  
    
    private:  
        int _defaultInt;

    public:  
        ParentClass(int d);        
        
        virtual int GetInt();   
        virtual int PrintBalance();  
};
#endif
