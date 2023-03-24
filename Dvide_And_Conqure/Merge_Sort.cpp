#include <iostream>
using namespace std;

void merge(int* arr, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Assume to create two Dynamic Arrays left and right

    int* left = new int[len1];
    int* right = new int[len2];

    // Copy len1 elements to left array
    int k = start;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // Copy len2 elements to Right Array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // Merge Logic  Compare and Merge Both Arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while ((leftIndex < len1) && (rightIndex < len2))
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // Copy logic for Left Array and Right Array if len is completed means
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}

void mergeSort(int* arr, int start, int end)
{
    // Base Case
    // When Single Element (start == end)
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
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}