#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
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
    cout << "Enter size of Array ::";
    cin >> n;
    vector<int> arr(n);
    int target;
    cout << "Enter Key Element to Search :: ";
    cin >> target;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "FirstOccurence Found at :: " << firstOccurence(arr, target);
    return 0;
}