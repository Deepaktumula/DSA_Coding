#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 4};
    int size = 8;
    int i = 0;
    for (int j = 1; j < size; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    int index = i + 1;
    cout << index << endl;
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}