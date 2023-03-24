#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
}

void mergeSort(int *arr, int start, int end)
{
    // Base Case
    // When SIngle Element (start == end)
    //  start > end
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    // Left Part array Sort
    mergeSort(arr, start, mid);

    // Right part Array
    mergeSort(arr, mid + 1, end);

    // Now Merge Both Sorted Array
    merge(arr, start, end);
}

int main()
{
    int arr[] = {4, 5, 13, 2, 21};
    int n = 5;
    int start = 0;
    int end = n - 1;
    mergeSort(arr, start, end);
    for (auto val : arr)
    {
        cout << val << " ";
        return 0;
    }
}