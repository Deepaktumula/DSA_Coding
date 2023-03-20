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
            cout << "  ";
        }
        for (int col = row + 1; col <= 2 * row + 1; col++)
        {
            cout << col << " ";
        }
        for (int k = 2 * row; k > row; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5