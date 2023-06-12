// It can be used for Variables,Functions and Objects.It is like Promise
// Ones the value is intitialized it cannot be changed again--->immutable
// Compiler stores it in Read Only Memory----->Optimization


//In C++ we have two types Lvalue and Rvalue

//Lvalue--->Variable having Memory Location-----> int x; char y;
//Rvalue--->Variable dosen't have Memory Location----->ex:- const int a = 5; int &a = b;



#include <iostream>
using namespace std;

int main()
{
    const int x = 5; //----->Constant cannot be Changed the VAlue Again.
    //Intiialization can be done but we cannot resign.

    // int *p = &x;------>Conversion of const keyword but this cannot be done in C++
    // *p = 10;

    cout << x << endl;
    return 0;
}