#include<iostream>
#include<vector>
using namespace std;

void buubbleSort(vector<int> arr)
{
    for(int i = 0; i < arr.size()-1;i++)
    {
        bool sorted = false;
        for(int j = 0 ; j < arr.size()-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                sorted = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(sorted == false)
            break;
    }
    for(int i = 0; i < arr.size();i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Size of Array:: " ;
    cin >> n;
    vector<int> arr(n);
    cout <<"Enter Array Elements:: " << endl;
    for(int i = 0; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    buubbleSort(arr);
    return 0;
}