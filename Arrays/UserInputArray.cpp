#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array::";
    cin >> n;
    int arr[10];
    // vector<int> arr(n);
    for(int i = 0;i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing Array Elements::";
    for(int i =0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}