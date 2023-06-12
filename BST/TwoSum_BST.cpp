// 100
// 50
// 20
// 70
// 200
// 300
// 350
// 250
// 400
// -1

#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = insertIntoBst(root->left, data);
    }
    else
    {
        root->right = insertIntoBst(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

// Using InOrder Technique
void StoreInOrder(Node *root, vector<int> &inOrder)
{
    if (root == NULL)
    {
        return;
    }
    // Left->Node->Right
    StoreInOrder(root->left, inOrder);
    inOrder.push_back(root->data);
    StoreInOrder(root->right, inOrder);
}

bool findTarget(Node *root, int k)
{
    vector<int> inOrder;
    StoreInOrder(root, inOrder);

    int s = 0;
    int e = inOrder.size() - 1;
    while (s < e)
    {
        int sum = inOrder[s] + inOrder[e];
        if (sum == k)
            return true;
        if (sum > k)
            e--;
        else
            s++;
    }
    return false;
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Node Data ::" << endl;
    takeInput(root);
    int k = 320;
    bool ans = findTarget(root, k);
    cout << "Two Pair Sum Found or Not :: " << ans << endl;
    return 0;
}