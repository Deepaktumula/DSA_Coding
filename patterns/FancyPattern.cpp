#include <iostream>
using namespace std;
int main()
{

    // First Part
    int rowcount = 5;
    for (int i = 0; i < rowcount; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
            if (j != i + 1 - 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // Second part
    for (int i = 0; i < rowcount; i++)
    {
        for (int j = 0; j < rowcount - i; j++)
        {
            cout << rowcount - i;
            if (j != rowcount - i - 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 5*5*5*5*5
    // 5*5*5*5*5
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1
}