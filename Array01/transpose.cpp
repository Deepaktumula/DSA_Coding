#include<iostream>
#include<vector>
using namespace std;
void transpose(vector<vector<int>> arr,int n, int m)
{
    vector<vector<int>> trans(n,vector<int>(m));
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j =0; j < arr.size(); j++)
        {
            trans[j][i] = arr[i][j];
        }
    }
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j =0; j < arr.size(); j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    } 
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j =0; j < arr.size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    transpose(arr,n,m);
    return 0;
}