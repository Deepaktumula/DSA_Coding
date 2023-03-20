#include<iostream>
using namespace std;
void wavePattern(int arr[][10],int n,int m)
{
    for(int col = 0; col < n;col++)
    {
        if((col & 1) == 0)
        {
            for(int i = 0; i < n; i++)
            {
                cout << arr[i][col] << " ";
            }
        }
        else
        {
            for(int j = m - 1;j >= 0; j-- )
            {
                cout << arr[j][col] <<" ";
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[10][10];
    for(int i = 0; i< n;i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    wavePattern(arr,n,m);
    return 0;
}