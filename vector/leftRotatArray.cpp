#include<iostream>
#include<vector>
using namespace std;
void leftrotate(vector<int> arr)
{
    vector<int> temp;
    int d = 1;
    for(int i = d; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
    }
    for(int j = 0;j < d;j++)
    {
        temp.push_back(arr[j]);
    }
    for(int k =0;k<temp.size();k++)
    {
        arr[k] = temp[k];
    }
    for(auto val: arr)
    {
        cout << val << " ";
    }
    // for(int i = 0;i < arr.size();i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

int main()
{
    int n;
    cout <<"Enter the Size of Elements ::";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements ::" << endl;
    for(int i = 0;i < arr.size();i++)
    {
        cin >> arr[i];
    }
    leftrotate(arr);
    return 0;
}