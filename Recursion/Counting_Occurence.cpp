#include <iostream>
using namespace std;

void checkKey(string s, int i, char key, int length,int& count)
{
    // Base Condition
    if (i >= length)
    {
        return;
    }

    // Processing
    if (s[i] == key)
    {
        count++;
    }

    // Recursive Relation                //Tail recursion
    checkKey(s, i + 1, key, length,count);
}

int main()
{
    string s = "racecar";
    char key = 'r';
    int count = 0;
    int i = 0;
    int length = s.length();
    checkKey(s, i, key, length,count);
    cout << count <<" ";
}