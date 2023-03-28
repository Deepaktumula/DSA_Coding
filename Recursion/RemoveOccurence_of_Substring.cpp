#include <iostream>
using namespace std;

void occurenceString(string &str, string &part)
{
    int position = str.find(part);
    if (position != string::npos)
    {
        // str.erase(position, part.size());

        string left_part = str.substr(0, position);
        string Right_part = str.substr(position + part.size(), str.size());
        str = left_part + Right_part;

        // Recursive Call
        occurenceString(str, part);
    }
    else
    {
        // Base Case
        // All the occurence of part has been removed
        return;
    }
}

int main()
{
    string str;
    cin >> str;
    string part;
    cin >> part;
    occurenceString(str, part);
    cout << str;
    return 0;
}