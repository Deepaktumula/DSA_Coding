#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n)
{
    int len = log10(n) + 1;
    int temp = n;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + round(pow(rem, len));
        n /= 10;
    }
    if(temp == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    for(int i = 100; i < 1000;i++)
    {
        if(isArmstrong(i))
        {
            cout << "Armstrong ::" << i << endl;
        }
    }
    return 0;
}