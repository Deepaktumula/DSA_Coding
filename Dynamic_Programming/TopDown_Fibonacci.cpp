#include <iostream>
#include <vector>
using namespace std;

int topDownFibonacci(int n, vector<int> &dp)
{
    // Base Case
    if (n == 1 || n == 0)
    {
        return n;
    }

    // Step 3: Base Case K just baad check if answer is Already Exist or Not
    if (dp[n] != -1)
    {
        return dp[n];
    }

    //  Step 2: Ans Store in dp
    dp[n] = topDownFibonacci(n - 1, dp) + topDownFibonacci(n - 2, dp);
    return dp[n];
}

int fib(int n)
{
    // Step 1: Create a dp Array (with size and intialization parameters)
    vector<int> dp(n + 1, -1);
    int ans = topDownFibonacci(n, dp);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}