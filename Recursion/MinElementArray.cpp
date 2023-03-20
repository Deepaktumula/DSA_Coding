#include <iostream>
#include <limits.h>
using namespace std;

void minElement(int arr[], int size, int &mini, int i)
{
    // Base case
    if (i >= size)
    {
        return;
    }

    // Processing
    mini = min(mini, arr[i]);

    // RRelation
    return minElement(arr, size, mini, i + 1);
}
int main()
{
    int arr[] = {1, 30, 0, 67};
    int size = 4;
    int i = 0;
    int mini = INT_MAX;
    minElement(arr, size, mini, i);
    cout << mini << " ";
}