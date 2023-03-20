#include<iostream>
#include<vector>
using namespace std;
int peakElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    int  mid = start + (end - start)/2;
    while(start < end)                          // TC :: O(logn)
    {                                           // SC :: O(1)
        if(arr[mid] < arr[mid + 1])
        {
            start = mid +1;
        }
        else if(arr[mid] > arr[mid+1])
        {
            end = mid;
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
    cout <<"peak Element is at Index :: " << peakElement(arr);
    return 0;
}

