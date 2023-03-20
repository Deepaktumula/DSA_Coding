#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start < end)                              // TC :: O(logn)
    {                                               // SC :: O(1)
        if( arr[mid + 1] < arr.size() && arr[mid] > arr[mid +1])
        {
            return mid;
        }
        else if(arr[mid - 1] >= 0 && arr[mid - 1] > arr[mid])
        {
            return mid -1;
        }
        else if(arr[mid] < arr[start])
        {
            end = mid -1;
        }
        else
        {
            start = mid ;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main()
{
    int n;
    cout << "Enter the Size of Array:: " ;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Array Elements:: " << endl;
    for(int i = 0; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    cout <<"peak Element is ::" << pivotElement(arr);
    return 0;
}


