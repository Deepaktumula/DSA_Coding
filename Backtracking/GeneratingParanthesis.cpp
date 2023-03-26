#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> &ans, int open, int close, string output)
{
    // Base Case
    if (open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }
    // Processing
    // Include open
    if (open > 0)
    {
        output.push_back('(');

        // Recursive Call
        solve(ans, open - 1, close, output);

        // backtracking
        output.pop_back();
    }
    // Include Close
    if (close > open)
    {
        output.push_back(')');

        // Recursive Call
        solve(ans, open, close - 1, output);

        // backtracking
        output.pop_back();
    }
}

vector<string> generateParanthesis(int n)
{
    vector<string> ans;
    string output = "";
    int open = n;
    int close = n;
    solve(ans, open, close, output);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> str = generateParanthesis(n);
    for (auto val : str)
    {
        cout << val << " ";
    }
    return 0;
}