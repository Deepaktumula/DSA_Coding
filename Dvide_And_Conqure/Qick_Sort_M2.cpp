#include <iostream>
using namespace std;

void quickSort(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }
    // Processing
    int pivot = end;
    int i = start - 1;
    int j = start;
    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[pivot]);

    // Recursive Calls
    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 4, 15, 2, 5};
    int n = 5;
    int start = 0;
    int end = n - 1;
    quickSort(arr, start, end);
    print(arr, n);
    // for(auto val : arr)
    // {
    //     cout << val << " ";
    // }
    return 0;
}