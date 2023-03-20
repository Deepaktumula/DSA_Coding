#include <iostream>
using namespace std;
int main()
{
    int rowcount = 5;
    for (int i = 0; i < rowcount; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int ans = j + 1;
            char ch = ans + 'A' - 1;
            cout << ch << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            int ans = k;
            char ch = ans + 'A' - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}

// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A