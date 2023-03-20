#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 2, 1, 0, 1, 0, 0, 2};
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
}