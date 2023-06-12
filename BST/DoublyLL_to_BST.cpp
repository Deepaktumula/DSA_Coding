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

Node *insertIntoBst(Node *root, int data)
{
    // IF First Node
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    // If not First Node
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

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Create A Queue
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        // Step : A
        Node *temp = q.front();
        // Step :B
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

void BstTODoublyLL(Node *root, Node *&head)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    // RightSubtree into LL
    BstTODoublyLL(root->right, head);

    // Attach Root Node
    root->right = head;
    if (head != NULL)
    {
        head->left = root;
    }

    // UPDATED HEAD-------->IMPORTANT
    head = root;

    // LeftSUbTree into LL
    BstTODoublyLL(root->left, head);
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

Node *doublyLLtoBst(Node *&head, int n)
{
    // Base Case
    if (n < 0)
    {
        return NULL;
    }
    // LeftSubTree
    Node *leftSubtree = doublyLLtoBst(head, n - 1 - n / 2);
    // Mid Node
    Node *root = head;
    root->left = leftSubtree;
    head = head->right;
    // RightSubtree
    root->right = doublyLLtoBst(head, n / 2);
    return root;
}

int main()
{
    Node *root = NULL;
    cout << "Enter Root Node Data ::" << endl;
    takeInput(root);
    cout << endl;

    cout << "Printing BST ::" << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Printing Linked List ::" << endl;
    Node *head = NULL;
    BstTODoublyLL(root, head);
    printLL(head);

    cout << "Printing BST ::" << endl;
    Node *root1 = doublyLLtoBst(head, 9);
    levelOrderTraversal(root1);

    // Node *root = new Node(50);
    // Node *first = new Node(30);
    // Node *second = new Node(60);
    // Node *third = new Node(5);
    // Node *fourth = new Node(20);
    // Node *fifth = new Node(45);
    // Node *sixth = new Node(70);
    // Node *seventh = new Node(65);
    // Node *eight = new Node(80);

    // root->left = first;
    // root->right = second;
    // first->left = third;
    // first->right = fourth;
    // second->left = fifth;
    // second->right = sixth;
    // sixth->left = seventh;
    // sixth->right = eight;

    // cout << "Lets See Whats Happening ::"<< endl;
    // levelOrderTraversal(root);

    return 0;
}