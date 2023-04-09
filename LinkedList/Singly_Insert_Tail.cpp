#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default Constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    // parameterized Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Check for Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // Step 1: Create A NewNode
    Node *newNode = new Node(data);

    // Step 2: Store Address of head Node
    newNode->next = head;

    // Step 3: swap head to newNode
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Check for Empty
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // Step 1: Create A NewNode
    Node *newnode = new Node(data);

    // Step 2: Store Address of next Node
    tail->next = newnode;

    // Step 3: swap head to newNode
    tail = newnode;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 80);
    insertAtHead(head, tail, 100);
    insertAtTail(head, tail, 77);
    insertAtTail(head, tail, 87);
    display(head);

    // cout << "head Data :: " << head->data <<endl;
    // cout << "tail Data :: " << tail->data <<endl;
    return 0;
}