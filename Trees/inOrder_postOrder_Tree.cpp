#include <iostream>
#include <queue>
#include <bits/stdc++.h>
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

int findPosition(int inOrder[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (inOrder[i] == element)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int inOrder[], int postOrder[], int &postIndex, int size, int inOrderStart, int inOrderEnd)
{
    // Base Case
    if (postIndex < 0 || inOrderStart > inOrderEnd)
    {
        return NULL;
    }
    // Step:A
    int element = postOrder[postIndex];
    postIndex--;
    Node *root = new Node(element);
    int pos = findPosition(inOrder, size, element);
    // right---Step:B
    root->right = buildTree(inOrder, postOrder, postIndex, size, pos + 1, inOrderEnd);
    // Left----Step:C
    root->left = buildTree(inOrder, postOrder, postIndex, size, inOrderStart, pos - 1);

    return root;
}

void levelOrderTraversal(Node *root)
{
    // Check for Empty
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
        // Step:A
        Node *temp = q.front();
        // Step:B
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
            // Step:C
            cout << temp->data << " ";
            // Step:D
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
    int inOrder[] = {40, 20, 10, 50, 30, 60};
    int postOrder[] = {40, 20, 50, 60, 30, 10};
    int size = 6;
    int postIndex = size - 1;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    Node *root = buildTree(inOrder, postOrder, postIndex, size, inOrderStart, inOrderEnd);
    levelOrderTraversal(root);
    return 0;
}