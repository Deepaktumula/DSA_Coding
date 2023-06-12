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
    // If First Root Node
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    // If Not First Node
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

int kthSmallestElement(Node *root, int &k)
{
    // Check for Empty Case
    if (root == NULL)
    {
        return -1;
    }

    // InOrder---LNR

    // Left  Side
    int leftAns = kthSmallestElement(root->left, k);

    if (leftAns != -1)
        return leftAns;

    // N->root
    k--;
    // Check for Condition
    if (k == 0)
    {
        return root->data;
    }
    // RIght
    int rightAns = kthSmallestElement(root->right, k);
    return rightAns;
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Data ::" << endl;
    takeInput(root);
    int k = 2;
    int smallestElement = kthSmallestElement(root, k);
    cout << "The Kth Smallest ELement is::" << smallestElement << endl;
    return 0;
}
