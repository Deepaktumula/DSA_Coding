#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> arr)
{
    for(int i = 0; i < arr.size()-1;i++)
    {
        int min_index = i;
        for(int j = i+1; j < arr.size(); j++)           // TC :: O(n^2)
        {                                               // SC :: O(1) Constant Space
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    for(auto val : arr)
    {
        cout << val <<" ";
    }
}
int main()
{
    int n;
    cout << "Enter the Size of elements :: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr);
    return 0;
}