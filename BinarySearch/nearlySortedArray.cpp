#include <iostream>
#include <vector>
using namespace std;
int nearlySorted(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end) // TC :: O(logn)
    {                    // SC :: O(1)
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter Size of Array :: ";
    cin >> n;
    vector<int> arr(n);
    int target;
    cout << "Enter the Target :: ";
    cin >> target;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Found at Index :: " << nearlySorted(arr, target);
    return 0;
}