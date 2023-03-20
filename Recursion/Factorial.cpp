#include <iostream>
using namespace std;
int fact(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    // Base case
    if (n == 1)
    {
        return 1;
    }
    // Recursive Relation
    int ans = n * fact(n - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}