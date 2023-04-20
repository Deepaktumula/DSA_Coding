#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    // Parameterized Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    // Destructor
    ~Node()
    {
        int val = this->data;
        if ((this->next != NULL) && (this->prev != NULL))
        {
            delete next;
            delete prev;
            this->next = NULL;
            this->prev = NULL;
        }
        cout << "Deleted Node with data is :: " << val << endl;
    }
};

void display(Node *&head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    do
    {
        len++;
        temp = temp->next;
    } while (temp != head);
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Check for Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        newnode->next = newnode->prev;
        head = newnode;
        tail = newnode;
        return;
    }
    Node *newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    tail->next = newnode;
    newnode->prev = tail;
    head = newnode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Check for Empty
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        newnode->next = newnode->prev;
        head = newnode;
        tail = newnode;
        return;
    }
    Node *newnode = new Node(data);
    newnode->prev = tail;
    newnode->next = head;
    tail->next = newnode;
    head->prev = newnode;
    tail = newnode;
}

void inserAtPosition(Node *&head, Node *&tail, int data, int position)
{
    // Check for Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        newnode->next = newnode;
        head = newnode;
        tail = newnode;
        return;
    }
    // If First Node
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // If Last Node
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    int i = 2;
    Node *prevnode = head;
    while (i < position)
    {
        prevnode = prevnode->next;
        i++;
    }
    Node *curr = prevnode->next;
    Node *newnode = new Node(data);
    newnode->prev = prevnode;
    newnode->next = curr;
    curr->prev = newnode;
    prevnode->next = newnode;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty " << endl;
    }
    int len = getLength(head);
    if (position > len)
    {
        cout << "Enter a Valid Position " << endl;
    }
    // IF Single Node
    if (head->next == head)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    // If First Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        tail->next = head;
        head->prev = tail;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    // If Last Node
    if (position == len)
    {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        temp->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int i = 2;
    Node *left = head;
    while (i < position)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;
    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 30);
    insertAtHead(head, tail, 20);
    inserAtPosition(head, tail, 50, 3);
    inserAtPosition(head, tail, 60, 5);
    insertAtHead(head, tail, 100);
    display(head);
    cout << endl;
    cout << "Head Data :: " << head->data << endl;
    cout << "Tail Data :: " << tail->data << endl;
    cout << "Last Node next data :: " << tail->next->data << endl;
    deleteAtPosition(head, tail, 1);
    deleteAtPosition(head, tail, 6);
    deleteAtPosition(head, tail, 5);
    cout << "Head Data :: " << head->data << endl;
    cout << "Tail Data :: " << tail->data << endl;
    cout << "Last Node next data :: " << tail->next->data << endl;
    return 0;
}