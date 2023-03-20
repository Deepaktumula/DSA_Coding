#include<iostream>
#include<vector>
using namespace std;
void stringReverses(string str)
{
    // int count = 0;
    for(int i = str.length()-1 ; i >= 0; i--)
    {
        cout << str[i] ;
        // count++;
    }
    cout << endl;
    // cout << count << endl;
}
int main()
{
    string str ="Deepak";
    // cin >> str;
    stringReverses(str);
    return 0;
}