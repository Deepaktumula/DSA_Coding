#include <iostream>
#include <string.h>
using namespace std;
int checkPalindrome(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int odd = checkPalindrome(s, i, i);
        count = count + odd;
        int even = checkPalindrome(s, i, i + 1);
        count = count + even;
    }
    return count;
}
int main()
{
    string s;
    cin >> s;
    cout << countSubstrings(s);
    return 0;
}