#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
using namespace std;

template <typename T>
class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        adjList[u].push_back(v);
        if (direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "->";
            for (auto neighbour : node.second)
            {
                cout << neighbour << ",";
            }
            cout << endl;
        }
    }

    void dfs(T src, unordered_map<int, bool> &visited)
    {
        // Step 1:
        cout << src << ",";
        // Step 2:
        visited[src] = true;
        // Step 3:
        for (auto neighbour : adjList[src])
        {
            if (!visited[neighbour])
            {
                dfs(neighbour, visited);
            }
        }
    }
};

int main()
{
    Graph<int> g;
    int n = 8;

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(3, 7, 0);
    g.addEdge(7, 6, 0);
    g.addEdge(7, 4, 0);
    
    unordered_map<int, bool> visited;
    cout << "Printing DFS TRAVERSAL :: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited);
        }
    }
    return 0;
}