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
        // create first root node
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

int minValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maaxValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Value ::" << endl;
    takeInput(root);
    cout << "Minimum Value in Binary Search Tree is ::" << minValue(root) << endl;
    cout << "Maximum Value in Binary Search Tree is ::" << maaxValue(root) << endl;
    return 0;
}