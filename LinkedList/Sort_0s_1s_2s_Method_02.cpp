#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted Value for Memory Free is :: " << val << endl;
    }
};

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

Node *sortMethod2(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    // Traversing Original Linked List Now
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            // Take 0 Waali Node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            // Append to zeroTail
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            // Take 0 Waali Node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            // Append to zeroTail
            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->data == 2)
        {
            // Take 0 Waali Node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            // Append to zeroTail
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // Join them and Append Now Completely
    // Removed ZeroHead
    Node *temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    // Removed oneHead
    temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // Removed twoHead
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;
    
    // join the List
    if (oneHead != NULL)
    {
        zeroTail->next = oneHead;
        if (twoHead != NULL)
        {
            oneTail->next = twoHead;
        }
    }
    else
    {
        // if (ONES LIST) is Empty
        if (twoHead != NULL)
        {
            zeroTail->next = twoHead;
        }
    }

    return zeroHead;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 0);
    display(head);
    cout << endl
         << endl;
    Node *newHead = sortMethod2(head);
    display(newHead);
    cout << endl
         << endl;
    return 0;
}