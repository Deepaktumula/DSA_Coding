#include<iostream>
using namespace std;

void checkPalindrome(int n)
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
        cout << "Palindrome";
    }
    else{
        cout << "Not a Palindrome";
    }
}
int main()
{
    int n;
    cin >> n;
    checkPalindrome(n);
    return 0;
}