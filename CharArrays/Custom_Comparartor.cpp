// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
#include <bits/stdc++.h>
using namespace std;

bool cmp(char first, char second)
{
    return first > second;
}
int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    vector<int> arr{1, 2, 3, 4, 5};
    sort(arr.begin(), arr.end(), cmp);
    for (auto val : arr)
    {
        cout << val;
    }
    return 0;
}