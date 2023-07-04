#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight, bool direction)
    {
        // Direction = 0 ---> Undirected Graph
        // Direction = 1 ---> Directed Graph

        // Create an Edge From (u to v)
        adjList[u].push_back({v, weight});

        if (direction == 0)
        {
            // Undirection Graph
            adjList[v].push_back({u, weight});
        }
    }
    // Printing
    void printAdjList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "->";
            for (auto neighbour : node.second)
            {
                cout << "(" << neighbour.first << "," << neighbour.second << "),";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;

    // Directed Graph
    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 8, 1);
    g.addEdge(0, 2, 6, 1);

    // undirected Graph
    //  g.addEdge(0, 1, 5, 0);
    //  g.addEdge(1, 2, 8, 0);
    //  g.addEdge(0, 2, 6, 0);
    cout << endl;
    g.printAdjList();
    return 0;
}