#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

void mergeInplace(vector<int> &arr, int start, int mid, int end)
{
    int total = end - start + 1;
    // int gap = ceil(start + end) / 2;
    int gap = ((total / 2) + (total % 2));
    while (gap > 0)
    {
        int i = start;
        int j = start + gap;
        while (j <= end)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
            ++i;
            ++j;
        }
        gap = gap <= 1 ? 0 : ((gap / 2) + (gap % 2));
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    // Recursiive Relation
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    mergeInplace(arr, start, mid, end);
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the Number of Elements :: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Array Elements :: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = arr.size() - 1;
    mergeSort(arr, start, end);
    print(arr);
    return 0;
}