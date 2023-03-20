#include <iostream>
#include <vector>
using namespace std;
int searchRotatedSorted(vector<int> arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    if (arr[mid] >= arr[start])
    {
      if (target >= arr[start] && target <= arr[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    else if (arr[mid] <= arr[start])
    {
      if (target >= arr[mid] && target <= arr[end])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main()
{
  int n;
  cin >> n;
  int target;
  cin >> target;
  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
  cout << searchRotatedSorted(arr, target);
  return 0;
}