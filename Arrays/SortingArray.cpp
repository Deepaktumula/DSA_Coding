#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int> arr)
{
    vector<int> ans;
    for(int i = 0 ; i < arr.size();i++)
    {
        for(int j = i+1; j < arr.size();j++)
        {
            if(arr[j] < arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
        ans.push_back(arr[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = sortArray(arr);;
    for(int i = 0 ; i < ans.size();i++)
    {
        cout << ans[i];
    }
    return 0;
}