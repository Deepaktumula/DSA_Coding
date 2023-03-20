#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int crr_element = arr[i];
        int j = i - 1;
        // find the correct position for our current element
        while (j >= 0 && arr[j] > crr_element)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = crr_element;
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }

    // for(int i = 0; i < arr.size();i++)
    // {
    //     cout << arr[i] << " ";
    // }
}
int main()
{
    int n;
    cout << "Enter Size of Array"
         << " ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr);
}