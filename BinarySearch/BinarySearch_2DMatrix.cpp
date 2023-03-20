#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> arr, int target, int n, int m)
{
    int start = 0;
    int end = m * n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int rowindex = mid / n;
        int colindex = mid % n;
        if (arr[rowindex][colindex] == target)
        {
            return true;
        }
        else if (target < arr[rowindex][colindex])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int main()
{
    int m;
    cout << "Enter no of rows :: ";
    cin >> m;
    int n;
    cout << "Enter no of cols :: ";
    cin >> n;
    vector<vector<int>> arr(m, vector<int>(n, 0));
    int target;
    cout << "Enter target :: ";
    cin >> target;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    if (searchMatrix(arr, target, n, m))
    {
        cout << " Found ";
    }
    else
    {
        cout << " Not Found ";
    }
    return 0;
}