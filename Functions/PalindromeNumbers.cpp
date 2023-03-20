#include<iostream>
using namespace std;

bool checkPalindrome(int n)
{
    int temp = n;
    int sum = 0;
    while(n != 0)
    {
        int rem = n % 10;
        sum = sum * 10 + rem;
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
    for(int i =100;i<1000;i++)
    {
        if(checkPalindrome(i))
        {
            cout << "Palindrome ::" << i << " "<< endl;
        }
    }
    return 0;
}