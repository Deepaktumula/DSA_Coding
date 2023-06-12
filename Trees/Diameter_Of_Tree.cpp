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
    Node *root = new Node(data);

    int leftData;
    cout << "Enter the Left Node Data " << data << "::" << endl;
    cin >> leftData;
    root->left = TreeNode(leftData);

    int rightData;
    cout << "Enter the Right Node Data " << data << "::" << endl;
    cin >> rightData;
    root->right = TreeNode(rightData);

    return root;
}

// Height / Max_Depth of Binary Tree
int maxDepth(Node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

// Diameter of Binary Tree
int diameterOfBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;

    int diaLeft = diameterOfBinaryTree(root->left);
    int diaRight = diameterOfBinaryTree(root->right);
    int dia = maxDepth(root->left) + maxDepth(root->right);
    int ans = max(diaLeft, max(diaRight, dia));
    return ans;
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter Root Data ::" << endl;
    cin >> data;
    root = TreeNode(data);
    cout << "Diameter of Tree :: " << diameterOfBinaryTree(root) << endl;
    return 0;
}