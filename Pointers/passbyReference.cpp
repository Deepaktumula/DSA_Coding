#include<iostream>
using namespace std;
void solve(int& val)
{
    val++;
}
int main()
{
    int a = 5;
    cout << a << endl << endl ;
    solve(a);
    cout << a;
}