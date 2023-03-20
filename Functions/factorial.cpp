#include<iostream>
using namespace std;

int factofnum(int num)
{
    int fact=1;
    for(int i =1;i<=num;i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    cin >> num;
    cout <<"factorial of " << num <<" is:"<< factofnum(num);
    return 0;
}