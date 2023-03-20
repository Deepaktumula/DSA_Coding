#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a == 0 ? b : a;
}

int lcm(int a,int b)
{
    int ans = gcd(a,b);

    int lcm = (a*b)/ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    cout << lcm(a, b);
    return 0;
}