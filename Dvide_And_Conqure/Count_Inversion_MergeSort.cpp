#include <iostream>
#include <vector>
using namespace std;

long merge(vector<int> &arr, vector<int> &temp, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    long c = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else // arr[i] > arr[j] Case.....Inversion count case
        {
            temp[k++] == arr[j++];
            c += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }
    while (start <= end)
    {
        arr[start] = temp[start];
        ++start;
    }
    return c;
}

long mergesort(vector<int> &arr, vector<int> &temp, int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return 0;
    }

    int mid = start + (end - start) / 2;
    long c = 0;
    // Recursive Relation

    // Left Part
    c += mergesort(arr, temp, start, mid);
    // Right Part
    c += mergesort(arr, temp, mid + 1, end);
    // To merge the left and right array
    c += merge(arr, temp, start, mid, end);
    return c;
}

long countInversions(vector<int> arr)
{
    long c = 0; // Count Inversions
    vector<int> temp(arr.size(), 0);
    c = mergesort(arr, temp, 0, arr.size() - 1);
    return c;
}

int main()
{
    int n;
    cout << "Enter the Value of  N ::" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Array Elements :: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // long c = countInversions(arr);
    cout << "Inversions in array :: " << countInversions(arr) << endl;
    return 0;
}