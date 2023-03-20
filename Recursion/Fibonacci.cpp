#include <iostream>
using namespace std;
int fib(int n)
{
    // Base Case
    if (n == 1)
    {
        return 0;
    }
    // Base Case
    if (n == 2)
    {
        return 1;
    }
    // Recursive Relation
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}