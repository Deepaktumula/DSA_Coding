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

void insertAtHead(Node *&head, int data)
{
    if(head == NULL)
    {
        Node* newnode = new Node(data);
        head = newnode;
        return ;
    }
    // Step 1: Create A NewNode
    Node *newNode = new Node(data);

    // Step 2: Store Address of head Node
    newNode->next = head;

    // Step 3: swap head to newNode
    head = newNode;
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
    Node *head = new Node(10);
    insertAtHead(head, 20);
    insertAtHead(head, 40);
    insertAtHead(head, 60);
    insertAtHead(head, 80);
    insertAtHead(head, 100);
    display(head);
    return 0;
}