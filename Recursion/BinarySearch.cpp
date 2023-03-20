#include <iostream>
#include <vector>
using namespace std;

int bSearch(vector<int> arr, int target, int start, int end)
{

    // Base Case
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    // Processing
    if (target > arr[mid])
    {
        // Recursive Relation
        return bSearch(arr, target, mid + 1, end);
    }
    else
    {
        // Recursive Relation
        return bSearch(arr, target, start, mid - 1);
    }
}

int main()
{
    int target;
    cout << "Enter Target Value :: " << endl;
    cin >> target;
    int n;
    cout << "Enter Size of Array :: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Array Elements :: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    cout << bSearch(arr, target, start, end);
    return 0;
}