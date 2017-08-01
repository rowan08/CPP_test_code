// deriv_VirtualFunctions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
class ParentClass {  
    
    private:  
        int _defaultInt;

    public:  
        ParentClass(int d) {
            _defaultInt = d; }
        
        virtual int GetInt() { 
            return _defaultInt; 
        }  
        
        virtual int PrintBalance() { 
            return 0; 
        }
  
};  
  
class ChildClass01 : public ParentClass {  
    
    private:
        int _childNumber;

    public:  
        ChildClass01(int defaultInt, int childNumber) : 
            ParentClass(defaultInt) {
                _childNumber = childNumber;
            }
        
        int PrintBalance() {
            return GetInt() * _childNumber; 
        }
};  
  
// class SavingsParentClass : public ParentClass {  
    
//     public:  
//         SavingsParentClass(double d) : ParentClass(d) {}  
        
//         void PrintBalance() { 
//             cout << "Savings account balance: " << GetBalance(); 
//         }
// };  
  
int main() {  
     
    ChildClass01 *pChecking = new ChildClass01(100, 2);

    // Call PrintBalance using a pointer to ParentClass.  
    //ParentClass *pParentClass = pChecking;  
    cout << pChecking->PrintBalance() << endl;

    return 0;
}  