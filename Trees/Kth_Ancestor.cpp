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
    // Check for Valid Case
    if (data == -1)
    {
        return NULL;
    }
    // Create A New Root Node
    Node *root = new Node(data);

    int leftData;
    cout << "Enter the Left Node Data of NOde " << data << "::" << endl;
    cin >> leftData;
    // Recurssive Relation
    root->left = TreeNode(leftData);

    int rightData;
    cout << "Enter thr Right Node Data of Node " << data << "::" << endl;
    cin >> rightData;
    // Recursive Relation
    root->right = TreeNode(rightData);

    return root;
}

bool KthAncestor(Node *root, int &k, Node *p)
{
    // Base Case
    if (root == NULL)
    {
        return false;
    }

    if (root->data == p->data)
    {
        return true;
    }
    // Recurssive Relation
    bool leftAns = KthAncestor(root->left, k, p);
    bool rightAns = KthAncestor(root->right, k, p);
    if (leftAns == true || rightAns == true)
    {
        k--;
    }
    if (k == 0)
    {
        cout <<"Kth Ancestor is ::"<< root->data << endl;
        k = -1;
    }
    return leftAns || rightAns;
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter the Root Data ::" << endl;
    cin >> data;
    root = TreeNode(data);
    int k = 2;
    Node *p = new Node(120);
    bool ans = KthAncestor(root, k, p);
    cout << "Present or Not ::"<< ans << endl;
    return 0;
}