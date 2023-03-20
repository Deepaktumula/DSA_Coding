#include<iostream>
using namespace std;

int ctof(int celcius)
{
    int fahrenheit;
    fahrenheit = celcius *9/5+ 32;
    return fahrenheit;
}

int main()
{
    int celcius;
    cin >> celcius;
    cout << ctof(celcius);
    return 0;
}