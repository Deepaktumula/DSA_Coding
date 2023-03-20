#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout << a << endl; // value of a.

    cout << &a << endl; // Address of a.

    cout << ptr << endl; // Value of ptr.

    cout << *ptr << endl; // value stored in the Location of ptr.
}

// OUTPUT:-

// 5
// 0x61ff08
// 0x61ff08
// 5