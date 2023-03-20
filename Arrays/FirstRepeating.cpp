#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int repeatingElement(int arr[], int size)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int size = 7;
    cout << repeatingElement(arr, size);
    return 0;
}