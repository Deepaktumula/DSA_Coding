#include <iostream>
using namespace std;
void solve(int *&p)
{
    p = p + 1;
}
int main()
{
    int a = 5;
    int *p = &a;
    cout << "Before :: " << endl;
    cout << a << endl;
    cout << &p << endl;
    cout << "Value stored at p :: " << p << endl;
    cout << *p << endl
         << endl;

    solve(p);

    cout << "After :: " << endl;
    cout << a << endl;
    cout << &p << endl;
    cout << "Value stored at p is changed :: " << p << endl;
    cout << *p << endl
         << endl;
}

// #include<iostream>
// using namespace std;
// void solve(int* p)
// {
//     *p = *p+ 1;
// }
// int main()
// {
//     int a = 5;
//     int* p = &a;
//     cout << a<<endl<<endl;
//     solve(&a);
//     cout <<a<<endl;
// }