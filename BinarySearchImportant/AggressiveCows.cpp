#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> stalls, int n, int k, int mid)
{
    int cowCount = 1;
    int pos = stalls[0]; // Placing 1st cow in 0th position
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - pos >= mid)
        {
            cowCount++;
            pos = stalls[i];
        }
        if (cowCount == k)
        {
            return true;
        }
    }
    return false;
}

int solve(vector<int> stalls, int n, int k)
{
    sort(stalls.begin(), stalls.end());

    int start = 0;
    // int stallssize = stalls.size();
    int end = stalls[stalls.size() - 1] - stalls[0];

    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(stalls, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Number of Stalls :: ";
    cin >> n;
    int k;
    cout << "Enter Number of Cows :: ";
    cin >> k;
    vector<int> arr(n);
    cout << "Enter the positions of stalls :: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << solve(arr, n, k);
    return 0;
}