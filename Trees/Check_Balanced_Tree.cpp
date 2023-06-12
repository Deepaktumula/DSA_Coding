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
    // Create Root NOde
    Node *root = new Node(data);

    // Create Root Node Left Nodes
    int leftData;
    cout << "Enter the Left Node Data of " << data << "::" << endl;
    cin >> leftData;
    root->left = TreeNode(leftData);

    // Create Root Node Right Nodes
    int rightData;
    cout << "Enter the Right Node Data of " << data << "::" << endl;
    cin >> rightData;
    root->right = TreeNode(rightData);

    return root;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    // Ek Case
    int leftH = height(root->left);
    int rightH = height(root->right);
    int diff = abs(leftH - rightH);
    bool ans1 = (diff <= 1);

    // Baaki Recursive Relation
    bool leftBalanced = isBalanced(root->left);
    bool rightBalanced = isBalanced(root->right);

    if (ans1 && rightBalanced && leftBalanced)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter Root Node Data ::" << endl;
    cin >> data;
    root = TreeNode(data);

    cout << isBalanced(root);
    return 0;
}