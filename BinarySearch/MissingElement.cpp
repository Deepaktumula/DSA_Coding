#include <iostream>
using namespace std;
int binarySearch(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else if (arr[mid] != mid + 1)
        {
            ans = mid + 1;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = 7;
    cout << binarySearch(arr, size);
}