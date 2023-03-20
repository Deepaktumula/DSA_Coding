#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int bs(vector<int> arr,int start,int x)
{
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start+(end - start)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int kDiffPAirs(vector<int> arr,int k)
{
    sort(arr.begin(),arr.end());
    set<pair<int,int>>ans;
    for(int i = 0; i < arr.size();i++)
    {
        if(bs(arr,i+1,arr[i]+k) != -1)
        {
            ans.insert({arr[i],arr[i]+k});
            // cout << arr[i] << " " << arr[i]+k << endl;
        }
    }
    return ans.size();
}
int main()
{
    int n;
    cout << "Enter Size Of array ::";
    cin >> n;
    vector<int> arr(n);
    int k = 2;
    cout <<"Enter Array ELements :: ";
    for(int i=0; i< arr.size();i++)
    {
        cin >> arr[i];
    }
    cout << "The Different Pairs are :: " << kDiffPAirs(arr,k) ;
    return 0;
}