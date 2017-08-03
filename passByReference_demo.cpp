#include <iostream>
#include <string>

using namespace std;

// // Original function
// int mySum(int a, int b) {

//     return a+b;
// }

// pass-by-reference function
int mySum(int &a, int &b) {

    return a+b;
}

int myInt;
int main() {

    myInt = mySum(3, 4);

    cout << myInt << endl;

    return 0;
}

//From: https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.1.0/com.ibm.zos.v2r1.cbclx01/cplr233.htm
/*
Pass-by-references is more efficient than pass-by-value,
because it does not copy the arguments. The formal
parameter is an alias for the argument. When the called
function reads or writes the formal parameter, it is
actually reading/writing the argument itself.

The difference between pass-by-reference and pass-by-value
is that modifications made to arguments passed in by
reference in the called function have effect in the
calling function, whereas modifications made to arguments
passed in by value in the called function can not affect
the calling function. Use pass-by-reference if you want to
modify the argument value in the calling function.
Otherwise, use pass-by-value to pass arguments.

The difference between pass-by-reference and
pass-by-pointer is that pointers can be NULL or reassigned
whereas references cannot. Use pass-by-pointer if NULL is
a valid parameter value or if you want to reassign the
pointer. Otherwise, use constant or non-constant
references to pass arguments.
*/

//From: http://www.learncpp.com/cpp-tutorial/73-passing-arguments-by-reference/
/* While pass by value is suitable in many cases, it has a
couple of limitations. First, when passing a large struct
or class to a function, pass by value will make a copy of
the argument into the function parameter. In many cases,
this is a needless performance hit, as the original
argument would have sufficed. Second, when passing
arguments by value, the only way to return a value back to
the caller is via the function’s return value. While this
is often suitable, there are cases where it would be more
clear and efficient to have the function modify the
argument passed in. Pass by reference solves both of these
issues.