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

bool solve(Node *root, long long int lb, long long int ub)
{
    // Base Case
    if (root == NULL)
    {
        return true;
    }
    // Processing
    if (root->data > lb && root->data < ub)
    {
        // Recursive Relation
        bool leftAns = solve(root->left, lb, root->data);
        bool rightAns = solve(root->right, root->data, ub);
        return leftAns && rightAns;
    }
    else
    {
        return false;
    }
}

bool isValidBst(Node *root)
{
    long long int lowerBound = -2147483648;
    long long int upperBound = 2147483648;
    bool ans = solve(root, lowerBound, upperBound);
    return ans;
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Data ::" << endl;
    takeInput(root);
    bool ans1 = isValidBst(root);
    cout << "BST is Valid or Not :: " << ans1 << endl;
    return 0;
}