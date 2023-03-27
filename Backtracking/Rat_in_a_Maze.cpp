#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int maze[][4], vector<vector<bool>> &visited)
{
    // Condition 1
    if ((i >= 0 && i <= row - 1) && (j >= 0 && j <= col - 1) && (maze[i][j] == 1) && (visited[i][j] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solveMaze(int maze[4][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // Base Case
    if (i == row - 1 && j == col - 1)
    {
        // Answer Found
        path.push_back(output);
        return;
    }

    // Processing
    // Recursive Call

    // Down i+1 & j
    if (isSafe(i + 1, j, row, col, maze, visited))
    {
        // Go in the direction and mark visited True
        visited[i + 1][j] = true;
        solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
        // BackTracking
        visited[i + 1][j] = false;
    }

    // Right i & j+1
    if (isSafe(i, j + 1, row, col, maze, visited))
    {
        // Go in the direction and mark visited True
        visited[i][j + 1] = true;
        solveMaze(maze, row, col, i, j + 1, visited, path, output + 'R');
        // BackTracking
        visited[i][j + 1] = false;
    }

    // Up i-1 & j
    if (isSafe(i - 1, j, row, col, maze, visited))
    {
        // Go in the direction and mark visited True
        visited[i - 1][j] = true;
        solveMaze(maze, row, col, i - 1, j, visited, path, output + 'U');
        // BackTracking
        visited[i - 1][j] = false;
    }

    // Left i & j-1
    if (isSafe(i, j, row, col, maze, visited))
    {
        // Go in the direction and mark visited True
        visited[i][j - 1] = true;
        solveMaze(maze, row, col, i, j - 1, visited, path, output + 'L');
        // BackTracking
        visited[i][j - 1] = false;
    }
}

int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    // Check Starting source of rat
    if (maze[0][0] == 0)
    {
        cout << "No Path Exists";
        return 0;
    }

    int row = 4;
    int col = 4;

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // Making Intial Source as True
    visited[0][0] = true;

    vector<string> path;
    string output = "";
    solveMaze(maze, row, col, 0, 0, visited, path, output);
    for (auto val : path)
    {
        cout << val << " ";
    }
    if (path.size() == 0)
    {
        cout << "No Path" << endl;
    }
}