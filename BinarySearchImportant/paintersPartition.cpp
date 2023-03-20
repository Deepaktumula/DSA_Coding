#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr,int n,int k,int mid)
{
    int painterCount = 1;
    int totalSum = 0;
    for(int i = 0;i < n; i++)
    {
        if(arr[i] > mid)
            return false;

        if(totalSum + arr[i] > mid)
        {
            painterCount++;
            totalSum += arr[i];

            if(painterCount > k)
                return false;
        }
        else
        {
            totalSum += arr[i];
        }
    }
    return true;
}

int paintersPartition(vector<int> arr,int n,int k)
{
    int start = 0;
    int end = 0;
    for(int i = 0; i < n;i++)
    {
        end += arr[i];
    }
    int ans = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(isPossible(arr,n,k,mid))
        {
            ans = mid;
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout <<"Enter Number of Boards :: ";
    cin >> n;
    int k;
    cout << "Enter Number of Painters :: ";
    cin >> k;
    vector<int> arr(n);
    for(int i = 0; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    cout <<"Minimum of Maximum time is :: " << paintersPartition(arr,n,k);
    return 0;
}