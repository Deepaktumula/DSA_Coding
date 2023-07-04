#include <iostream>
#include <vector>
#include <list>
#include <stack>
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

    void topoSortDfs(T src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;

        for (auto neighbour : adjList[src])
        {
            if (!visited[neighbour])
            {
                topoSortDfs(neighbour, visited, ans);
            }
        }
        ans.push(src);
    }
};

int main()
{
    Graph<int> g;
    int n = 8;

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 6, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 7, 1);

    g.printAdjList();
    unordered_map<int, bool> visited;
    stack<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.topoSortDfs(i, visited, ans);
        }
    }
    cout << "Printing Topological Sort :: " << endl;
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;
}