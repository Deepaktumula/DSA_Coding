#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    a++;
    cout << "Printing B value :: " << b << endl;
    b++;
    cout << "Printing A value :: " << a << endl;
    cout << &b << endl;
    cout << &a << endl;
}