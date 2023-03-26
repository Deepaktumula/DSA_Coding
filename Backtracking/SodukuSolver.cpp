#include <iostream>
using namespace std;

bool isSafe(int row, int col, int board[9][9], int val, int n)
{
    for (int i = 0; i < n; i++)
    {
        // check for rows
        if (board[row][i] == val)
        {
            return false;
        }
        // column check
        if (board[i][col] == val)
        {
            return false;
        }
        // 3* 3 Board check
        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == val)
        {
            return false;
        }
    }
    return true;
}

bool solve(int board[9][9], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Check For every Empty cell
            if (board[i][j] == 0)
            {
                // try to fill the values from 1- 9
                for (int val = 1; val <= 9; val++)
                {
                    if (isSafe(i, j, board, val, n))
                    {
                        // Insert
                        board[i][j] = val;
                        // recursive call
                        int aageKaSolution = solve(board, n);
                        if (aageKaSolution == true)
                        {
                            return true;
                        }
                        else
                        {
                            // backtracking
                            board[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    // When all cells are filled
    return true;
}
int main()
{
    int board[9][9] = {
        {4, 5, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 2, 0, 7, 0, 6, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 8},
        {0, 0, 0, 9, 5, 0, 0, 0, 0},
        {0, 8, 6, 0, 0, 0, 2, 0, 0},
        {0, 2, 0, 6, 0, 0, 7, 5, 0},
        {0, 0, 0, 0, 0, 0, 4, 7, 6},
        {0, 7, 0, 0, 4, 5, 0, 0, 0},
        {0, 0, 8, 0, 0, 9, 0, 0, 0},
    };
    int n = 9;
    solve(board, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}