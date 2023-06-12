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
        // If First Node
        root = new Node(data);
        return root;
    }
    // If Not First Node
    if (root->data > data)
    {
        // Insert Left
        root->left = insertIntoBst(root->left, data);
    }
    else
    {
        // Insert Right
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

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Data ::" << endl;
    takeInput(root);
    inOrderTraversal(root);
    return 0;
}