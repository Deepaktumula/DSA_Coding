#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *TreeNode(int val)
{
    if (val == -1)
    {
        return NULL;
    }
    // Create Root NOde
    Node *root = new Node(val);

    // Create Root Node Left Nodes
    int leftData;
    cout << "Enter the Left Node Data of " << val << "::" << endl;
    cin >> leftData;
    root->left = TreeNode(leftData);

    // Create Root Node Right Nodes
    int rightData;
    cout << "Enter the Right Node Data of " << val << "::" << endl;
    cin >> rightData;
    root->right = TreeNode(rightData);

    return root;
}

Node *lowestComonAncestor(Node *root, Node *p, Node *q)
{
    // Base Case
    if (root == NULL)
    {
        return NULL;
    }

    // Check for P and Q
    if (root->val == p->val)
    {
        return p;
    }
    if (root->val == q->val)
    {
        return q;
    }

    Node *leftAns = lowestComonAncestor(root->left, p, q);
    Node *rightAns = lowestComonAncestor(root->right, p, q);

    if (leftAns == NULL && rightAns == NULL)
    {
        return NULL;
    }
    if (leftAns != NULL && rightAns == NULL)
    {
        return leftAns;
    }
    if (leftAns == NULL && rightAns != NULL)
    {
        return rightAns;
    }
    if (leftAns != NULL && rightAns != NULL)
    {
        return root;
    }
}

int main()
{
    Node *root = NULL;
    int val;
    cout << "Enter Root Node Data ::" << endl;
    cin >> val;
    Node *p = new Node(50);
    Node *q = new Node(90);
    root = TreeNode(val);

    Node *ans = lowestComonAncestor(root, p, q);
    cout << ans->val;
    return 0;
}