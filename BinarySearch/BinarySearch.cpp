#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end) // TC :: O(logn)
    {                    // SC :: O(1)
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < mid)
        {
            end = mid - 1;
        }
        else if (key > mid)
        {
            start = start + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int key;
    cout << "Enter Key ELement:: ";
    cin >> key;
    int n;
    cout << "Enter the Size of Array:: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Array Elements:: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Index of Element is:: " << binarySearch(arr, key);
    // cout << binary_search(arr.begin(),arr.end(),5);
}