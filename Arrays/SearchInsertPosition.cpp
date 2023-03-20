#include <iostream>
using namespace std;

int insertElement(int arr[], int size, int pos, int key)
{
    size++;
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = key;
    return pos;
}

int linearSearch(int arr[], int size, int key)
{
    int i = 0;
    int index;
    while (i < size)
    {
        if (arr[i] == key)
        {
            return i;
        }
        else if (arr[i] != key)
        {
            if (key > arr[i])
            {
                i++;
            }
            else
            {
                index = insertElement(arr, size, i, key);
                return index;
            }
        }
    }
    return size;
}
int main()
{
    int arr[10] = {1, 3, 5, 6, 7};
    int size = 5;
    int key = 8;
    cout << linearSearch(arr, size, key);
    return 0;
}