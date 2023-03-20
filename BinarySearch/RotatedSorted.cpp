#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
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

int pivotIndex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end) // TC :: O(logn)
    {                   // SC :: O(1)
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        else if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else if (arr[start] < arr[mid])
        {
            start = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int search(vector<int> arr, int target)
{
    int pivot = pivotIndex(arr);

    if (target >= arr[0] && target <= arr[pivot]) // Searching in Array A
    {
        int ans = binarySearch(arr, target, 0, pivot);
        return ans;
    }
    else if (pivot + 1 < arr.size() && target >= arr[pivot + 1] && target <= arr.size() - 1) // Searching in B array
    {
        int ans = binarySearch(arr, target, pivot + 1, arr.size() - 1);
        return ans;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int target;
    cout << "Enter Target element :: ";
    cin >> target;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int index = search(arr, target);
    if (index == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}