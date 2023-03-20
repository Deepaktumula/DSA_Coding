#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    cout << "Value of A :: " << a << endl
         << endl;
    cout << "Address of A :: " << &a << endl
         << endl;
    cout << "Value of p :: " << p << endl
         << endl;
    cout << "Address of p :: " << &p << endl
         << endl;
    cout << "Value of *p :: " << *p << endl
         << endl;
    cout << "Value of q :: " << q << endl
         << endl;
    cout << "Address of q :: " << &q << endl
         << endl;
    cout << "Value of *q :: " << *q << endl
         << endl;
    cout << "Value of **q :: " << **q << endl
         << endl;
}
