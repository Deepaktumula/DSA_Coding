#include <iostream>
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
}

Node *buildTree(int inOrder[], int preOrder[], int size, int &preIndex, int inOrderStart, int inOrderEnd)
{
    // Base Case
    if (preIndex >= size || inOrderStart > inOrderEnd)
    {
        return NULL;
    }
    // Step:A
    int element = preOrder[preIndex++];
    Node *root = new Node(element);
    int pos = findPosition(inOrder, size, element);
    // Step:B
    root->left = buildTree(inOrder, preOrder, size, preIndex, inOrderStart, pos - 1);
    // Step:C
    root->right = buildTree(inOrder, preOrder, size, preIndex, pos + 1, inOrderEnd);

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
    int inOrder[] = {20, 10, 40, 30, 50};
    int preOrder[] = {10, 20, 30, 40, 50};
    int size = 5;
    int preIndex = 0;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    Node *root = buildTree(inOrder, preOrder, size, preIndex, inOrderStart, inOrderEnd);
    levelOrderTraversal(root);
    return 0;
}
