#include <iostream>
#include <string.h>
using namespace std;
string removeDuplicates(string str)
{
    string ans = "";
    int i = 0;
    while (i < str.length())
    {
        if ((ans.length() > 0) && ans[ans.length() - 1] == str[i]) // TC :: O(n)
        {                                                          // SC :: O(n)
            ans.pop_back();
        }
        else
        {
            ans.push_back(str[i]);
        }
        i++;
    }
    return ans;
}
int main()
{
    string str;
    cout << "Enter the String :: ";
    cin >> str;
    cout << "Output :: " << removeDuplicates(str);
    return 0;
}