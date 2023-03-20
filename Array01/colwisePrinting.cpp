#include<iostream>
#include<vector>
using namespace std;
void colwisePrint(vector<vector<int>> arr,int n,int m)
{
    cout << "colwise Printing" << endl;
    for(int i= 0; i< n;i++)
    {
        for(int j =0;j < m;j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }    
}
int main()
{
    // int arr[10][10];
    int n;
    cout << "Enter the no of Rows ::";
    cin >> n;
    int m;
    cout << "Enter the no of cols ::";
    cin >> m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    cout << "Enter the elements::" << endl;
    for(int i= 0; i< n;i++)
    {
        for(int j =0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    colwisePrint(arr,n,m);
}