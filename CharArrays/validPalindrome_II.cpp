#include <iostream>
#include <string.h>
using namespace std;
bool checkPalindrome(string str, int i, int j)
{
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
bool validPalindrome(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return checkPalindrome(str, i + 1, j) || checkPalindrome(str, i, j - 1);
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter string :: ";
    cin >> str;
    cout << validPalindrome(str);
    return 0;
}