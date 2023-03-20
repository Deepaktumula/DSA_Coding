#include <iostream>
using namespace std;

int main()
{
    int rowcount;
    cin >> rowcount;
    for (int row = 0; row < rowcount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5