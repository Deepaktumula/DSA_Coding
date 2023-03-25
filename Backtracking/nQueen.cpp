#include <iostream>
#include <vector>
using namespace std;

void printSolution(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    // Chechk Whether Queen can be placed in cureent position or not
    int i = row;
    int j = col;
    // check row
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    // check upper left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }
    // check bottom diagonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{
    // Base Case
    if (col >= n)
    {
        printSolution(board, n);
        return;
    }

    // Processing
    // 1 case solve karna Baaki Recursion Sambhal lega
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // Rakh do
            board[row][col] = 'Q';

            // Recursive Relation
            solve(board, col + 1, n);

            // backtracking
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);
    return 0;
}