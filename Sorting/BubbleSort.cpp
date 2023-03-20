#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> arr)
{
    for(int i = 1; i < arr.size();i++)                      // TC :: O(n^2)
    {                                                       // SC :: O(1)  Constant Space
        bool swapped = false;
        for(int j = 0;j < arr.size()-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapped = true;                            // Optimized TC :: O(n) Best Case when whole Array is Sorted
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
    for(auto val: arr)
    {
        cout << val <<" ";
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
    bubbleSort(arr);
    return 0;
}