#include <iostream>
using namespace std;

int main()
{
    int rowcount;
    cin >> rowcount;
    for (int row = 0; row < rowcount; row++)
    {
        for (int space = 0; space < rowcount - row - 1; space++)
        {
            cout << " ";
        }
        if (row == 0 || row == rowcount - 1)
        {
            for (int col = 0; col < row + 1; col++)
            {
                cout << col + 1 << " ";
            }
        }
        else
        {
            cout << 1;
            for (int k = 0; k < 2 * row - 1; k++)
            {
                cout << " ";
            }
            cout << row + 1;
        }
        cout << endl;
    }
}

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5