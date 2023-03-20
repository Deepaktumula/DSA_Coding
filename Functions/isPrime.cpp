#include<iostream>
#include<cmath>
using namespace std;

void isPrime(int num)
{
    int flag =1 ;
    for(int i=2; i <= sqrt(num);i++)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }
}

int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;
    isPrime(num);
    return 0;
}