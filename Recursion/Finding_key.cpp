#include <iostream>
using namespace std;

bool checkKey(string s, int i, char key, int length)
{
    // Base Condition
    if (i >= length)
    {
        return false;
    }

    // Processing
    if (s[i] == key)
    {
        return true;
    }

    // Recursive Relation                //Tail recursion
    checkKey(s, i + 1, key, length);
}

int main()
{
    string s = "Deepak";
    char key = 'P';
    int i = 0;
    int length = s.length();
    cout << checkKey(s, i, key, length);
}