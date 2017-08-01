#include "ParentClass.h" 

ParentClass::ParentClass (int defaultInt) {
        _defaultInt = defaultInt;
}

int ParentClass::getInt() {
    return _defaultInt;
}

// int ParentClass::printBalance() {
//     return 0;
// }
