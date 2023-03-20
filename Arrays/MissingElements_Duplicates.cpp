#include <iostream>
using namespace std;
void missingElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i]);
        // Because arr is starting with one and now we are Visiting
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        // Left Over Positive element index is Duplicate
        if (arr[i] > 0)
            cout << i + 1 << endl;
    }
}
int main()
{
    int arr[] = {2,3,4,1,6,7};
    int size = sizeof(arr) / sizeof(int);
    missingElement(arr, size);
    return 0;
}