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

    // Parameterized Constructor
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

int main()
{
    // Intialized Data
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    // Intializing Next Address
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Displaying/Printing the Values of Linked List
    cout << "Elements in Linked List are :: " << endl;
    display(first);
    return 0;
}