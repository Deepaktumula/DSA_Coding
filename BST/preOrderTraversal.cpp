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

Node* insertIntoBst(Node *root, int data)
{
    if (root == NULL)
    {
        // If First Node
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

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    //NLR
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Data ::" << endl;
    takeInput(root);
    preOrderTraversal(root);
    return 0;
}