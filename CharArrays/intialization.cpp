#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch[100];
    cout << "Enter Something :: ";
    cin >> ch ;
    cin >> ch[7];
    cout << endl;
    cout << "Entered name is :: " << ch << ch[7];
}
