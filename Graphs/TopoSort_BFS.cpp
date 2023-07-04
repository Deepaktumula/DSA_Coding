#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;
template <typename T>

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // Direction = 0 Undirectional Graph
        // Direction = 1 Directional Graph
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

    void topoSortBfs(int n, vector<int> &ans)
    {
        queue<int> q;
        unordered_map<int, int> indegree;
        // Indegree Calculate
        for (auto i : adjList)
        {
            int src = i.first;
            for (auto nbr : i.second)
            {
                indegree[nbr]++;
            }
        }
        // insert all nodes which have Indegree 0
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        // Bfs Logic
        while (!q.empty())
        {
            int fNode = q.front();
            q.pop();

            ans.push_back(fNode);
            // Or we can Do Count++;

            for (auto nbr : adjList[fNode])
            {
                indegree[nbr]--;
                // Check for Indegree 0
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};

int main()
{
    Graph<int> g;
    int n = 8;

    g.addEdge(2, 4, 1);
    g.addEdge(2, 5, 1);
    g.addEdge(4, 6, 1);
    g.addEdge(5, 3, 1);
    g.addEdge(3, 7, 1);
    g.addEdge(6, 7, 1);
    g.addEdge(7, 0, 1);
    g.addEdge(7, 1, 1);

    g.printAdjList();
    cout << endl;

    vector<int> ans;
    // Connnected Graph
    g.topoSortBfs(n, ans);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}