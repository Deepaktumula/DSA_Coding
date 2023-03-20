#include <iostream>
using namespace std;

int negativeMarking(int arr[], int size)
{
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i]);
        // Already Visited
        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        else
        {
            // if Visited mark -1;
            arr[index] *= -1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 2, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    cout << negativeMarking(arr, size);
    return 0;
}