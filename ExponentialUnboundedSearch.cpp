#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bs(vector<int> arr, int start, int end, int target)
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

int exponentialSearch(vector<int> arr, int target)
{
    int i = 1;
    int j = arr.size();

    if (arr[0] == target)
        return 0;

    while (i < j && arr[i] <= target)
    {
        i = i * 2;
    }
    return bs(arr, i / 2, min(i, j - 1), target);
}

int main()
{
    int n;
    cout << "Enter Size Of Array :: ";
    cin >> n;
    vector<int> arr(n);
    int target;
    cout << "Enter Element to search :: ";
    cin >> target;
    cout << "Enter the Elements :: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Target Found using Exponential Search at :: " << exponentialSearch(arr, target);
    return 0;
}