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

//Height of Binary Tree
int height(Node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter Root Data ::" << endl;
    cin >> data;
    root = TreeNode(data);
    cout << "Height of Tree / Max-Depth of the Tree :: " << height(root) << endl;
    return 0;
}