#include <iostream>
#include <string>

using namespace std;

//Some notes
/*  To declare a variable as a pointer in C++, use the syntax *variableName
    For a normal varaible, e.g. int myInt = 5; you can get the address of this variable
        by using the '&' operator - i.e. &myInt
    Similarly, you can use this to point your pointer at the address of a specific variable
        like so: int *myPointer = &myInt


*/

int *a, b, c;

int main() {
    

    c = 15;
    int *myPointer = &c;
    cout << endl << "Values of c and myPointer" << endl;
    cout << c << " " << &c << endl;
    cout << *myPointer << " " << myPointer << endl;

    int *myInt = new int;
    *myInt = 9;

    b = 10;

    //Point a to b;
    a = &b;

    cout << endl << "Value of myInt" << endl;
    cout << myInt << endl; 
    cout << *myInt << endl; 
    
    cout << endl << "Value of a" << endl;
    cout << *a << endl; 

    // If b changes now, so does a
    cout << endl << "If b changes now, so does a" << endl;
    b++;
    cout << *a << endl; 
    cout << b << endl;

    //Likewise, a can change the value of b
    cout << endl << "Likewise, a can change the value of b" << endl;
    *a = *a + 1;
    cout << *a << endl; 
    cout << b << endl;

    //Note, the following will not change b
    cout << endl << "Note, the following will not change b" << endl;
    *a++;
    cout << *a << endl; 
    cout << b << endl << endl;

    return 0;
}