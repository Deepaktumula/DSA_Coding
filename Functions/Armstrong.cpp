#include<iostream>
using namespace std;
void isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }
    if(temp == sum)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << " Not an Armstrong Number";
    }
    
}

int main()
{
    int n;
    cin >> n;
    isArmstrong(n);
    return 0;
}