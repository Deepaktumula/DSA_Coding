#include <iostream>
#include <limits.h>
using namespace std;

int maxNofSegments(int n, int x, int y, int z)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }

    int ans1 = maxNofSegments(n - x, x, y, z) + 1;
    int ans2 = maxNofSegments(n - y, x, y, z) + 1;
    int ans3 = maxNofSegments(n - z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));
    return ans;
}

int main()
{
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;
    int ans = maxNofSegments(n, x, y, z);
    if (ans < 0)
        ans = 0;
    cout << "Maximum No of Segments in a Rod :: " << ans << endl;
    return 0;
}