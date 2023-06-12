#include <iostream>
#include <vector>
using namespace std;

int bottomUpFibonacci(int n)
{
    // Step 1: Create a dp Array (with size and intialization parameters)
    vector<int> dp(n + 1, -1);

    // Step 2: Check for Base Case in above topDown or Recursion Function and fill this Base Case for dp
    dp[0] = 0;
    if (n == 0)
    {
        return 0;
    }

    dp[1] = 1;
    if (n == 1)
    {
        return 1;
    }

    // Step 3:top Down Approach ma kaise travel karra h uske reverse traversal karna tha
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << bottomUpFibonacci(n);
    return 0;
}