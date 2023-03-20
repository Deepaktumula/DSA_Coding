#include <iostream>
#include <limits.h>
using namespace std;

int maxElement(int arr[], int size, int &maxi, int i) // Pass by Reference
{
    // Base Case
    if (i >= size)
    {
        return 0;
    }

    // Processing
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }

    // Recursive Relation
    return maxElement(arr, size, maxi, i + 1);
}

int main()
{
    int arr[] = {10, 230, 1, 60};
    int size = 4;

    int maxi = INT_MIN;
    int i = 0;
    maxElement(arr, size, maxi, i);
    cout << maxi << " ";
}