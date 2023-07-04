#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

template <typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adjList;

    void addEdge(T u, T v, bool direction)
    {
        // Direction = 0 undirection graph
        // Direction = 1 Directional Graph
        adjList[u].push_back(v);
        if (direction == 0)
        {
            // Undirectional Graph
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

    void bfs(T src, unordered_map<T, bool> &visited)
    {
        queue<T> q;
        // Create Visited Data Structure
        // unordered_map<T, bool> visited;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            // Step 1:
            int frontNode = q.front();
            // Step 2:
            q.pop();
            // Step 3:
            cout << frontNode << ",";

            // Insert Neighbours
            for (auto neighbour : adjList[frontNode])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
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

    g.printAdjList();
    cout << endl;

    unordered_map<int, bool> visited;
    cout << "Printing BFS TRAVERSAL :: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.bfs(i, visited);
        }
    }
    // g.bfs(0);
    return 0;
}