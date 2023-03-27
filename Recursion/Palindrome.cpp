#include <iostream>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return true;
    }

    // Processing
    if (str[start] != str[end])
    {
        return false;
    }

    // Recursive Processing
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string str;
    cin >> str;
    int start = 0;
    int end = str.size() - 1;
    cout << isPalindrome(str, start, end);
    return 0;
}