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

Node *TreeNode(int data)
{
    if (data == -1)
    {
        return NULL;
    }

    // Create Root Node
    Node *root = new Node(data);

    // Create Left Node Data
    int leftData;
    cout << "Enter the Left Node Data of " << data << endl;
    cin >> leftData;
    root->left = TreeNode(leftData);

    // Create Right Node Data
    int rightData;
    cout << "Enter the Right Node Data of " << data << endl;
    cin >> rightData;
    root->right = TreeNode(rightData);

    return root;
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter Root Node Data ::" << endl;
    cin >> data;
    root = TreeNode(data);
    postOrderTraversal(root);
    return 0;
}