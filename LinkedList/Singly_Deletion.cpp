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
    // Destructor to Delete Variables
    ~Node()
    {
        cout << "Deleted :: " << this->data << endl;
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

void inserAtHead(Node *&head, Node *&tail, int data)
{
    // Check Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Check Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        tail->next = newnode;
        tail = newnode;
    }
}

void insertPosition(Node *&head, Node *&tail, int data, int position)
{
    // check empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // If positon is 1
    if (position == 1)
    {
        inserAtHead(head, tail, data);
        return;
    }
    // If position is at last
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // if Position at Middle
    int i = 2;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newnode = new Node(data);
    newnode->next = curr;
    prev->next = newnode;
}

// Deletion athead
void deletionAtPosition(Node *&head, Node *&tail, int position)
{
    // Check Empty
    if (head == NULL)
    {
        cout << "Linked List is Empty " << endl;
        return;
    }
    int len = getLength(head);
    cout << "length of  LL :: " <<  len << endl << endl ;
    if (position > len)
    {
        cout << "Enter a Valid Present Position " << endl;
    }
    // At Head Deletion
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    // At Tail Deletion
    if (position == len)
    {
        // Finding Previous Position to make it to TAIL
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node *temp = tail;
        tail = prev;
        delete temp;
        return;
    }
    // At Middle Deletion
    int i = 2;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    inserAtHead(head, tail, 10);

    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    display(head);
    cout << endl;

    insertPosition(head, tail, 40, 4);
    display(head);
    cout << endl;

    deletionAtPosition(head, tail, 6);
    display(head);
    cout << endl;

    return 0;
}