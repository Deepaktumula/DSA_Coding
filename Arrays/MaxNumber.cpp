#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 30, 5, 60};
  int size = 6;
  int maxi = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > maxi)
    {
      maxi = arr[i];
    }
  }
  cout << maxi;
  return 0;
}
