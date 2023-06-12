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

Node *BstUsingInOrder(int inOrder[], int s, int e)
{
    // Base Case
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    int element = inOrder[mid];
    Node *root = new Node(element);
    // Left
    root->left = BstUsingInOrder(inOrder, s, mid - 1);
    // right
    root->right = BstUsingInOrder(inOrder, mid + 1, e);

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // create a Queue
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
    int inOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = 8;
    Node *root = BstUsingInOrder(inOrder, start, end);
    levelOrderTraversal(root);
    return 0;
}