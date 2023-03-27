#include <iostream>
using namespace std;

// Left to Right

// void isFound_last_char(string &str, char x, int i, int &ans)
// {
//     // Base Case
//     if (i >= str.size())
//     {
//         cout << ans;
//         return;
//     }

//     // Processing
//     if (str[i] == x)
//     {
//         ans = i;
//     }

//     // Recursive Call
//     isFound_last_char(str, x, i + 1, ans);
// }

// Right to left

void isFound_last_char(string &str, char x, int i, int &ans)
{
    // Base Case
    if (i < 0)
    {
        // cout << ans ;
        return;
    }

    // Processing
    if (str[i] == x)
    {
        ans = i;
        return;
    }

    // Recursive Call
    return isFound_last_char(str, x, i - 1, ans);
}

int main()
{
    string str;
    cin >> str;
    char x;
    cin >> x;
    // int i = 0;
    int i = str.size() - 1;
    int ans = -1;
    isFound_last_char(str, x, i, ans);
    cout << ans;
    return 0;
}
