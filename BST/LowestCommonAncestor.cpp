#include <iostream>
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
        // Create a New First Node
        root = new Node(data);
        return root;
    }
    // If not First Node
    if (root->data > data)
    {
        // Insert Left
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

Node *lowestCommonAncestor(Node *root, Node* p, Node* q)
{
    // Base Case
    if (root == NULL)
    {
        return NULL;
    }
    // Case:1
    if (p->data < root->data && q->data < root->data)
    {
        return lowestCommonAncestor(root->left, p, q);
    }
    // Case:
    if (p->data > root->data && q->data > root->data)
    {
        return lowestCommonAncestor(root->right, p, q);
    }
    // Case:3
    // Case:4
    return root;
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Node Data ::" << endl;
    takeInput(root);
    Node* p = new Node(70);
    Node* q = new Node(160);
    Node *ans = lowestCommonAncestor(root,p,q);
    cout << ans->data;
    return 0;
}
