#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int> &coins, int amount)
{
    // Base Case
    if (amount == 0)
    {
        return 0;
    }

    if (amount < 0)
    {
        return INT_MAX;
    }

    // Processing
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solve(coins, amount - coins[i]);

        // If Solution is Valid
        if (ans != INT_MAX)
        {
            // ans + 1 because to make the Target Element
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = solve(coins, amount);
    if (ans == INT_MAX)
    {
        return -1;
    }
    return ans;
}

int main()
{
    vector<int> coins{1,2,5};
    int amount = 11;
    cout << coinChange(coins, amount);
}