#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void majorityElement(vector<int> arr)
{
    int maxcount = 0;
    int index = -1;
    for(int i =0; i < arr.size();i++)                   // TC :: O(^2)
    {
        int count = 0;                                  // SC :: O(1)
        for(int j = 0; j< arr.size();j++)
        {
            if(arr[i] == arr[j])
                count ++;
        }
        if( count > maxcount)
        {
            maxcount = count;
            index = i;
        }
    }
    if(maxcount > (arr.size())/2)
        cout << "Majority Element is ::" << maxcount;
    else
        cout << "No majority element";
}
int main()
{
    int n;
    cout << "Enter Size of array:: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements:: " << endl;
    for(int i =0; i< arr.size();i++)
    {
        cin >> arr[i];
    }
    majorityElement(arr);
}