#include <iostream>
using namespace std;

int spaceOptimizationFibonacci(int n)
{
    int prev2 = 0;
    int prev1 = 1;

    if (n == 0)
    {
        return prev2;
    }
    if (n == 1)
    {
        return prev1;
    }

    int current;
    for (int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main()
{
    int n;
    cin >> n;
    cout << spaceOptimizationFibonacci(n);
    return 0;
}