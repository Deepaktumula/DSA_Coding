#include <iostream>
using namespace std;
int solve(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int ans = -1;
    while (start <= end) // TC :: O(logn)
    {                    // SC :: O(1)
        int mid = start + (end - start) / 2;
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        // mid = start + (end - start)/2;
    }
    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
        return ans;
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend;
    cout << "Enter Dividend :: ";
    cin >> dividend;
    int divisor;
    cout << "Enter Divisor :: ";
    cin >> divisor;
    double ans = solve(dividend, divisor);
    int precision = 4;
    double step = 0.1;
    // cout << ans ;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * divisor <= dividend; j += step)
        {
            ans = j;
        }
        step /= 10;
    }
    cout << ans;
    return 0;
}