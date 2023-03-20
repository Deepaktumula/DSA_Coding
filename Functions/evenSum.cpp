#include<iostream>
using namespace std;

int evenSum(int n)
{
    int sum = 0;
    for(int i =2; i <= n;i=i+2)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int result = evenSum(n);
    cout << result << endl;
    return 0;
}