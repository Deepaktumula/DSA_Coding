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

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

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

void insertPosition(Node *&head, Node *&tail, int data, int position)
{
    // Check for Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // If First Position then Call insertAtHead()
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = getLength(head);
    // If Position is End then Call insertAtTail()
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // If Insert at Position
    int i = 2;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // Create a new Node
    Node *newnode = new Node(data);
    newnode->next = curr;
    prev->next = newnode;
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
    cout << endl;

    insertPosition(head, tail, 50, 2);
    display(head);

    cout << endl;

    // cout << "head Data :: " << head->data <<endl;
    // cout << "tail Data :: " << tail->data <<endl;
    return 0;
}