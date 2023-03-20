#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int minNumber(vector<vector<int>> arr,int n,int m)
{
    int min = INT_MAX;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j =0; j < arr.size(); j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int n,m;
    cout <<" Enter Number of Rows and Col::";
    cin >> n >>m;
    cout << "Enter the elements::" << endl;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j =0; j < arr.size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << minNumber(arr,n,m);
    return 0;
}
