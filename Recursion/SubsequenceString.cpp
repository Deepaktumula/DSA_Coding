#include <iostream>
#include <vector>
using namespace std;

void subSequence(string str, string ans, int i, vector<string> &v)
{
    // Base Case
    if (i >= str.length())
    {
        // cout << ans <<" ";
        v.push_back(ans);
        return;
    }
    // Processing
    // Exclude
    //  subSequence(str,ans,i+1);
    subSequence(str, ans, i + 1, v);

    // Include
    ans = ans + (str[i]);
    // subSequence(str,ans,i+1);
    subSequence(str, ans, i + 1, v);
}

int main()
{
    string str = "xy";
    string ans = "";
    int i = 0;
    vector<string> v;
    subSequence(str, ans, i, v);
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << v.size() << endl;
    return 0;
}