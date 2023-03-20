#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

string longestCommonPrefix(vector<string> strs)
{
    string ans;
    int i = 0;
    while (true)
    {
        char current_char = 0;

        for (auto str : strs)
        {
            if (current_char == 0)
            {
                current_char = str[i];
            }
            else if (current_char != str[i])
            {
                current_char = 0;
                break;
            }
        }

        if (current_char == 0)
        {
            break;
        }

        ans.push_back(current_char);
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    string s = longestCommonPrefix(strs);
    cout << s;
    return 0;
}