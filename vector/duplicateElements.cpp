#include <iostream>
#include <vector>
using namespace std;
void duplicateElements(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}

// {
//     while(arr[0] != arr[arr[0]])
//     {
//         swap(arr[0],arr[arr[0]]);
//     }
//     cout << "Duplicate Element is :: " <<  arr[0] ;
// }
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    duplicateElements(arr);
}