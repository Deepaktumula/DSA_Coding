#include <iostream>
using namespace std;

void displayArray(int arr[], int size, int i)
{
    // Base Case
    if (i >= size)
    {
        return;
    }

    // Processing
    cout << arr[i] << " ";

    // Recursive Relation
    displayArray(arr, size, i + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int i = 0;
    displayArray(arr, size, i);
    return 0;
}