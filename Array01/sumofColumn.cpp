#include<iostream>
#include<vector>
using namespace std;
void sumofRows(vector<vector<int>> arr,int n, int m)
{
    for(int i =0; i< n;i++)
    {
        int sum = 0;
        for(int j =0; j < m;j++)
        {
            sum = sum + arr[j][i];
        }
        cout <<"Sum of Cols is ::" << sum << endl;
    }    
}
int main()
{
    int n;
    cout << "Enter number of Rows::" ;
    cin >> n;
    int m;
    cout << "Enter number of Columns::" ; 
    cin >> m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    cout << "Enter the elements::" << endl;
    for(int i =0; i< n;i++)
    {
        for(int j =0; j < m;j++)
        {
            cin >> arr[i][j];
        }
    }
    sumofRows(arr,n,m);
}