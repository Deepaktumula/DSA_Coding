#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int index = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;
    int largest = index;

    if (leftIndex <= n && arr[largest] < arr[leftIndex])
    {
        largest = leftIndex;
    }
    if (rightIndex <= n && arr[largest] < arr[rightIndex])
    {
        largest = rightIndex;
    }

    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{
    while (n != 1)
    {
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
}

int main()
{
    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int n = 11;
    buildHeap(arr, n);
    cout << "printing Heap ::" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    heapSort(arr, n);
    cout << endl
         << "Printing HeapSort ::" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}