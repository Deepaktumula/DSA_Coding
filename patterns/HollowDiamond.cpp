#include <iostream>
using namespace std;
int main()
{
    int rowcount = 5;
    // First Part
    for (int i = 0; i < rowcount; i++)
    {
        for (int space = 0; space < rowcount - i - 1; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // Second Part
    for (int i = 0; i < rowcount; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * rowcount - 2 * i - 1; j++)
        {
            if (j == 0 || j == 2 * rowcount - 2 * i - 1 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *