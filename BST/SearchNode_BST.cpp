#include <iostream>
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

bool searchInBst(Node *root, int target)
{
    // Base Case
    if (root == NULL)
    {
        return false;
    }
    if (root->data == target)
    {
        return true;
    }
    // Processing
    if (target > root->data)
    {
        // Search in RightSide of Tree
        return searchInBst(root->right, target);
    }
    else
    {
        return searchInBst(root->left, target);
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Data ::" << endl;
    takeInput(root);
    int target;
    cout << "Enter the Target to be Searched ::" << endl;
    cin >> target;
    bool ans = searchInBst(root, target);
    cout << "Target is Present or Not ::" << ans << endl;
    return 0;
}