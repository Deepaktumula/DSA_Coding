#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int sLargest(vector<int> arr, int n)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int sSmallest(vector<int> arr, int n)
{
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < sSmallest)
        {
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sLargest(arr, n) << " ";
    cout << sSmallest(arr, n);
    return 0;
}