#include <iostream>
using namespace std;

int main()
{
    int rowcount;
    cin >> rowcount;
    for (int row = 0; row < rowcount; row++)
    {
        for (int col = 0; col < rowcount - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// * * * * *
// * * * *
// * * *
// * *
// *