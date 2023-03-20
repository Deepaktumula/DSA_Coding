#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,1,0,1,0,0,0,1,0};
    int size = 10;
    int ones = 0;
    int zeros = 0;
    for(int i =0; i < size;i++)
    {
        if(arr[i] == 1)
        {
            ones += 1;
        }
        else if(arr[i] == 0)
        {
            zeros += 1;
        }
    }
    cout << "Number of 1's ::" << ones << endl;
    cout << "Number of 0's ::" << zeros << endl;
    return 0;
}