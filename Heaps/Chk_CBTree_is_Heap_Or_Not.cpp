#include <iostream>
#include <queue>
#include <limits.h>
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

Node *buildTree(int data)
{
    if (data == -1)
    {
        return NULL;
    }

    // Create A Root Node
    Node *root = new Node(data);

    int leftData;
    cout << "Enter the left node data of Node " << data << "::" << endl;
    cin >> leftData;
    root->left = buildTree(leftData);

    int rightData;
    cout << "Enter the right node data of Node " << data << "::" << endl;
    cin >> rightData;
    root->right = buildTree(rightData);

    return root;
}

pair<bool, int> solve(Node *root)
{
    // Base Case  Leaf Node and Root NULL
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, INT_MIN);
        return p;
    }

    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = solve(root->left);
    pair<bool, int> rightAns = solve(root->right);

    if (leftAns.first == true && rightAns.first == true && root->data >= leftAns.second && root->data >= rightAns.second)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    else
    {
        pair<bool, int> p = make_pair(false, root->data);
        return p;
    }
}

int main()
{
    Node* root = NULL;
    int data;
    cout << "Enter Root Node Data :: "<< endl;
    cin >> data;
    root = buildTree(data);
    pair<bool, int> ans = solve(root);
    cout << "Binary Tree Or Not :: "<< ans.first << endl;
    return 0;
}