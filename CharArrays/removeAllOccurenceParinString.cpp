#include <iostream>
#include <string.h>
using namespace std;
string allOccurence(string str, string part)
{
    int position = str.find(part);
    while (position != string::npos)
    {
        str.erase(position, part.length());
        position = str.find(part);
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter the String :: ";
    cin >> str;
    string part;
    cout << "Enter the Part :: ";
    cin >> part;
    cout << allOccurence(str, part);
    return 0;
}