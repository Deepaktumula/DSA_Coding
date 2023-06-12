#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    int row;
    int col;

    Node(int d, int r, int c)
    {
        data = d;
        row = r;
        col = c;
    }
};

class Compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};

vector<int> smallestRange(vector<vector<int>> &nums)
{

    int mini = INT_MAX;
    int maxi = INT_MIN;
    // Create Min Heap
    priority_queue<Node *, vector<Node *>, Compare> minHeap;
    int k = nums.size();

    for (int i = 0; i < k; i++)
    {
        int element = nums[i][0];
        maxi = max(maxi, element);
        mini = min(mini, element);
        minHeap.push(new Node(element, i, 0));
    }

    int ansStart = mini;
    int ansEnd = maxi;

    while (!minHeap.empty())
    {
        Node *top = minHeap.top();
        int topElement = top->data;
        int topRow = top->row;
        int topCol = top->col;

        minHeap.pop();
        // mini UPDATED
        mini = topElement;

        // Check for ANSWER
        if (maxi - mini < ansEnd - ansStart)
        {
            ansStart = mini;
            ansEnd = maxi;
        }
        // Check for New Element in Same List
        if (topCol + 1 < nums[topRow].size())
        {
            maxi = max(maxi, nums[topRow][topCol + 1]);
            Node *newNode = new Node(nums[topRow][topCol + 1], topRow, topCol + 1);
            minHeap.push(newNode);
        }
        else
        {
            break;
        }
    }
    vector<int> ans;
    ans.push_back(ansStart);
    ans.push_back(ansEnd);
    return ans;
}

int main()
{
    vector<vector<int>> lists = {{4, 10, 15, 24, 26}, {0, 9, 12, 20}, {5, 18, 22, 30}};
    vector<int> ans = smallestRange(lists);
    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}