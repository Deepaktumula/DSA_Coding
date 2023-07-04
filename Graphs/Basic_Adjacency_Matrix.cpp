#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter N no of Nodes :: " << endl;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    int e;
    cout << "Enter N no of Edges :: " << endl;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;
        // Mark as 1
        adj[src][dest] = 1;
    }
    // Printing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}