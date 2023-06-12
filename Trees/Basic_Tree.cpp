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
    // Check for Valid Case
    if (data == -1)
    {
        return NULL;
    }

    // Processing

    // Create a Root Node
    Node *root = new Node(data);

    int leftData;
    cout << "Enter the left node data of Node " << data << "::" << endl;
    cin >> leftData;
    // Recursive Relation
    root->left = TreeNode(leftData);

    int rightData;
    cout << "Enter the right node data of Node " << data << "::" << endl;
    cin >> rightData;
    // Recursive Relation
    root->right = TreeNode(rightData);

    return root;
}

void levelOrderTraversal(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    // Create a Queue
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // Step A
        Node *temp = q.front();
        // Step B
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // Step C
            cout << temp->data << " ";
            // Step D
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter the Root Data :: " << endl;
    cin >> data;
    root = TreeNode(data);
    levelOrderTraversal(root);
    return 0;
}