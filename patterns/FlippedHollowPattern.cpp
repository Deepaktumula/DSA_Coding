#include <iostream>
using namespace std;
int main()
{
    // First-- Starts Part
    int rowcount = 5;
    for (int i = 0; i < rowcount; i++)
    {
        for (int j = 0; j < rowcount - i; j++)
        {
            cout << "*";
        }
        // Second--- Spaces Part
        for (int space = 0; space < 2 * i + 1; space++)
        {
            cout << " ";
        }
        // Third--- Stars part
        for (int j = 0; j < rowcount - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // First-- Starts Part
    for (int i = 0; i < rowcount; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // Second--- Spaces Part
        for (int space = 0; space < 2 * rowcount - 2 * i - 1; space++)
        {
            cout << " ";
        }
        // Third-- Stars part
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****