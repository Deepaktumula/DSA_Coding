#include <iostream>
using namespace std;

int power(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }

    // Recursive Relation
    int ans = 2 * power(n - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << power(n);
    return 0;
}