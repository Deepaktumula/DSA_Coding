#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortNegative(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int i =0;
    for(int i =0; i < arr.size();i++)
    {
        if( arr[i] < 0)
        {
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        else if(arr[i] > 0)
        {
            swap(arr[end],arr[i]);
            end--;
        }
    }
    for(auto val: arr)
    {
        cout << val << " ";
    }

    // while (start < end)
    // {
    //     if (arr[start] < 0)
    //     {
    //         start++;
    //     }
    //     else if (arr[end] > 0)
    //     {
    //         end--;
    //     }
    //     else
    //     {
    //         swap(arr[start], arr[end]);
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    sortNegative(arr);
    return 0;
}