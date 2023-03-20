#include<iostream>
using namespace std;

void isEvenorOdd(int num)
{
    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main()
{
    int num;
    cout << "Enter the number::";
    cin >> num;
    isEvenorOdd(num);
    return 0;
}