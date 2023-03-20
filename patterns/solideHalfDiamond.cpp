#include <iostream>
using namespace std;
int main()
{
    int rowcount;
    cin >> rowcount;
    for (int row = 0; row < rowcount; row++)
    {
        for (int j = 0; j < row + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 1; row < rowcount; row++)
    {
        for (int k = 0; k < rowcount - row; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *