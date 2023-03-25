#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

    // Step 1:: Choose PivotIndex
    int pivotIndex = start;
    int pivotElement = arr[start];

    // Step 2::
    //  Place Pivot element by counting the correct position of it
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    int rightIndex = start + count;

    // Now Place pivot in its correct position
    swap(arr[pivotIndex], arr[rightIndex]);
    // Update pivot index because we need to check for left element and right elements till pivotIndex
    pivotIndex = rightIndex;

    // Step 3::
    int i = start;
    int j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        // If we Found elements we need to swap and place it in right place
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }

    // Processing
    int p = partition(arr, start, end);

    // Recursive Relation
    // Left part sorting
    quickSort(arr, start, p - 1);
    // Right Part Sorting
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[] = {8, 1, 3, 1, 2, 3, 4, 20, 50, 30};
    int n = 10;
    int start = 0;
    int end = n - 1;
    quickSort(arr, start, end);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}