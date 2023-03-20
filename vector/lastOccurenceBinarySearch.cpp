#include <iostream>
#include <vector>
using namespace std;
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
    cout << "Enter Key or Target value:: " << endl;
    cin >> key;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Last Occurence found At :: " << lastOccurence(arr, key);
    return 0;
}
