#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> arr)
{
    for(int i = 1; i < arr.size();i++)              // TC :: O(n^2)
    {                                               // SC :: O(1)
        int val = arr[i];
        int j = i-1;
        for( ; j >= 0 ; j--)
        {
            if(arr[j] > val)                        // Best Case O(n) when whole Array is Sorted
                arr[j+1] = arr[j];
            else
            {
                break;
            }

        }
        arr[j+1] = val;
    }
    for(auto val : arr)
    {
        cout << val << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the Size of elements :: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr);
    return 0;
}