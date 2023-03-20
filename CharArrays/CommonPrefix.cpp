#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
string commonPrefix(vector<string> arr, int n)
{
    string ans = "";
    for (int i = 0; i < arr[0].length(); i++) // TC :: O(n^2)
    {                                         // SC :: O(n)
        char current_char = arr[0][i];
        bool matched = true;

        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[j].size() < i || current_char != arr[j][i])
            {
                matched = false;
                break;
            }
        }
        if (matched == false)
        {
            break;
        }
        else
        {
            ans.push_back(current_char);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "longest Common Prefix is :: " << commonPrefix(arr, n);
    return 0;
}