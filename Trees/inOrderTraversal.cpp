#include <iostream>
#include <queue>
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

Node *TreeNode(int data)
{
    if (data == -1)
    {
        return NULL;
    }
    // Create a Root Node Data
    Node *root = new Node(data);

    // Create Left Node Data
    int leftData;
    cout << "Enter the Left Node data of " << data << "::" << endl;
    cin >> leftData;
    root->left = TreeNode(leftData);

    // Create Right Node Data
    int rightData;
    cout << "Enter the Right Node data of " << data << "::" << endl;
    cin >> rightData;
    root->right = TreeNode(rightData);

    return root;
}

void inOrderTraversal(Node *root)
{
    // check for Empty
    if (root == NULL)
    {
        return;
    }
    // LNR
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter Root Node Data ::" << endl;
    cin >> data;
    root = TreeNode(data);
    inOrderTraversal(root);
    return 0;
}