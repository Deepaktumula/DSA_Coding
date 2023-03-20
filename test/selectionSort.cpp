#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // if(i != min_index)
        // {
        //     swap(arr[i],arr[min_index]);
        // }
        swap(arr[i], arr[min_index]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Size of Array:: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Array Elements:: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr);
    return 0;
}