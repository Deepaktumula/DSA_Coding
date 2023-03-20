#include <iostream>
using namespace std;

void checkKey(string s, int i, char key, int length)
{
    // Base Condition
    if (i >= length)
    {
        return;
    }

    // Processing
    if (s[i] == key)
    {
        cout << i << " ";
    }

    // Recursive Relation                //Tail recursion
    checkKey(s, i + 1, key, length);
}

int main()
{
    string s = "Deepak";
    char key = 'e';
    int i = 0;
    int length = s.length();
    checkKey(s, i, key, length);
}