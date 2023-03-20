#include <iostream>
#include <limits.h>
using namespace std;

int main() 
{
  int arr[]={1,2,3,30,5,0};
  int size = 6;
  int min = INT_MAX;
  for(int i = 0; i < size;i++)
  {
    if(arr[i] < min)
    {
      min = arr[i];
    }
  }
  cout << min;
  return 0;
}