#include <iostream>
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
        if (this->next != NULL)
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

Node *getMiddleNode(Node *&head)
{
    // Check for Empty
    if (head == NULL)
    {
        cout << "Linked List is empty " << endl;
    }
    // Check for Single Node and Return
    if (head->next == NULL)
    {
        return head;
    }
    // More than One Node
    Node *slow = head;
    // Node *fast = head;               //100 10 20 30 40 50 // O/p:- 30
    Node *fast = head->next; // 100 10 20 30 40 50 // O/p:- 20
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 100);
    // insertAtHead(head, tail, 500);
    display(head);
    cout << endl;

    Node *mid = getMiddleNode(head);
    cout << mid->data;
    return 0;
}