#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Deleted Node is :: " << this->data << endl;
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
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Check Empty Case
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
        head->prev = newnode;
        head = newnode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Check Empty Case
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertPosition(Node *&head, Node *&tail, int data, int position)
{
    // Check for Empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        // If positon is 1
        if (position == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }
        // if Position is End then insertAtTail
        int len = getLength(head);
        if (position > len)
        {
            insertAtTail(head, tail, data);
            return;
        }
        // Insert At Middle
        int i = 2;
        Node *prevNode = head;
        while (i < position)
        {
            prevNode = prevNode->next;
            i++;
        }
        Node *curr = prevNode->next;

        Node *newnode = new Node(data);

        newnode->prev = prevNode;
        prevNode->next = newnode;
        newnode->next = curr;
        curr->prev = newnode;
    }
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    // Check for Empty
    if (head == NULL)
    {
        cout << "cannot Delete Linked Listr is Empty " << endl;
        return;
    }
    // If Single Node is Persent
    if (head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    // If It is 1st Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    // If it is Last Node
    int len = getLength(head);
    if (position == len)
    {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    // If It is in Midddle Position
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
    return;
}

int main()
{
    Node *first = new Node(20);
    Node *second = new Node(30);
    Node *third = new Node(40);
    Node *fourth = new Node(50);

    Node *head = first;
    Node *tail = fourth;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    display(head);
    cout << endl;

    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 80);
    display(head);
    cout << endl;

    insertPosition(head, tail, 500, 3);
    display(head);
    cout << endl;

    deleteAtPosition(head, tail, 3);
    display(head);
    cout << endl;

    return 0;
}
