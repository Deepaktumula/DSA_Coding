#include <iostream>
using namespace std;
int squareRoot(int n)
{
    int start = 0;
    int end = n;
    int target = n;
    int ans = -1;
    while (start <= end) // TC :: O(logn)
    {                    // SC :: O(1)
        int mid = start + (end - start) / 2;
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number :: ";
    cin >> n;
    double ans = squareRoot(n);
    int precision = 3;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * j <= n; j += step)
        {
            // cout << j << endl;
            ans = j;
        }
        step /= 10;
    }
    cout << ans;
    return 0;
}