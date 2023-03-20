#include <iostream>
using namespace std;
void util(int *p)
{
    p = p + 1;
}
int main()
{
    int a = 5;
    int *p = &a;

    cout << "Pointer BY Value :: -->>" << endl
         << endl;
    cout << "Before :: ";
    cout << a << endl;
    cout << "value at p :: " << p << endl
         << endl;

    util(p);

    cout << "After :: ";
    cout << a << endl;
    cout << "value at p :: " << p << endl;
}