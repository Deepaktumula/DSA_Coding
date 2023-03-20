#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxNumber(vector<vector<int>> arr,int n,int m)
{
    int max = INT_MIN;
    for(int i =0;i < arr.size();i++)
    {
        for(int j =0; j < arr.size();j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    } 
    return max; 
}
int main()
{
    int n,m;
    cout << "Enter number of rows and columns::" << endl;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    cout << "Enter elements::" << endl;
    for(int i =0;i < arr.size();i++)
    {
        for(int j =0; j < arr.size();j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maxNumber(arr,n,m);
    return 0;
}