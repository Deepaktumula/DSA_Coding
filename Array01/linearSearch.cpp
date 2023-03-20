#include<iostream>
#include<vector>
using namespace std;
bool linearSearch(vector<vector<int>> arr,int key,int n,int m)
{
    for(int i =0;i < arr.size();i++)
    {
        for(int j =0;j < arr[i].size();j++)
        {
            if(arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m,key;
    cout << "Enter Number of row and cols::";
    cin >> n >> m;
    cout << "Enter Key value::";
    cin >> key;
    vector<vector<int>> arr(n,vector<int>(m,0));
    cout << "Enter elements::" << endl;
    for(int i =0;i < arr.size();i++)
    {
        for(int j =0; j < arr[i].size();j++)
        {
            cin >> arr[i][j];
        }
    }
    if(linearSearch(arr,key,n,m))
    {
        cout << "Found" ;
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}