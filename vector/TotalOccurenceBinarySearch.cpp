#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccurence(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int key;
    cout << "Enter Key or Target Value:: " << endl;
    cin >> key;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "FirstOccurence is found at :: " << firstOccurence(arr, key) << endl;
    cout << "LastOccurence is found at :: " << lastOccurence(arr, key) << endl;
    cout << "TotalOccurence is :: " << (lastOccurence(arr, key) - firstOccurence(arr, key) + 1);
}