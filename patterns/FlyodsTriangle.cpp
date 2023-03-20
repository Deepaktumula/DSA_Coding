#include<iostream>
using namespace std;
int main()
{
    int rowcount = 5;
    int c = 1;
    for(int i = 0; i < rowcount;i++)
    {
        for(int j = 0; j < i+1;j++)
        {
            cout << c <<" ";
            c++;
        }
        cout << endl;
    }
}