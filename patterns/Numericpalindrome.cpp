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
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        for (int k = row; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1