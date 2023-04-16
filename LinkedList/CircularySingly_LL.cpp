// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node()
//     {
//         this->data = 0;
//         this->next = NULL;
//     }
//     // Parameterized Constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     // Destructor
//     ~Node()
//     {
//         int data = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << "Deleted data is :: " << data << " ";
//     }
// };

// void insertAtHead(Node* &head,int data)
// {
//     Node* newnode = new Node(data);
//     if(head == NULL)
//     {
//         head = newnode;
//         newnode->next = newnode;
//         return ;
//     }
//     Node* temp = head;

//     while(temp->next != head )
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->next = head;
//     head = newnode;
// }

// void inserAtTail(Node* &head,int data)
// {
//     if(head == NULL)
//     {
//         insertAtHead(head,data);
//         return ;
//     }

//     Node* newnode = new Node(data);
//     Node* temp = head;
//     while(temp->next != head )
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->next = head;
// }

// void insertAtPosition(Node* &head,int data,int position)
// {
//     if(head == NULL)
//     {
//         Node* newnode = new Node(data);
//         head = newnode;
//         newnode->next = newnode ;
//         return;
//     }
//     if(position == 1)
//     {
//         insertAtHead(head,data);
//         return ;
//     }
//     int i = 2;
//     Node* prev = head;
//     while(i < position)
//     {
//         prev = prev->next;
//         i++;
//     }
//     Node* curr = prev->next;
//     //create A new Node
//     Node* newnode = new Node(data);
//     newnode->next = curr;
//     prev->next = newnode;
// }

// void display(Node* head)
// {
//     Node* temp = head;
//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }while(temp != head);
//     cout << endl;
// }

// int main()
// {
//     Node* head = NULL;
//     inserAtTail(head,20);
//     inserAtTail(head,40);
//     // display(head);
//     insertAtHead(head,10);
//     insertAtHead(head,30);
//     display(head);

//     insertAtPosition(head,50,4);
//     insertAtPosition(head,500,6);
//     display(head);

//     inserAtTail(head,25);
//     insertAtHead(head,22);
//     display(head);
//     // delete head;
//     return 0;
// }

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // Destructor
    ~Node()
    {
        int val = this->data;
        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted Node with Val is :: " << val << " " << endl;
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

void insertHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        newnode->next = newnode;
        head = newnode;
        tail = newnode;
        return;
    }
    // Create A Newnode
    Node *newnode = new Node(data);
    newnode->next = head;
    tail->next = newnode;
    head = newnode;
}

void insertTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        newnode->next = newnode;
        head = newnode;
        tail = newnode;
        return;
    }
    // Create a Newnode
    Node *newnode = new Node(data);
    tail->next = newnode;
    newnode->next = head;
    tail = newnode;
}

void insertPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        newnode->next = head;
        head = newnode;
        tail = newnode;
        return;
    }
    // If position at starting
    if (position == 1)
    {
        insertHead(head, tail, data);
        return;
    }
    // If position at Ending
    int len = getLength(head);
    if (position > len)
    {
        insertTail(head, tail, data);
        return;
    }
    // If Middle Position
    int i = 2;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // creating a newnode
    Node *newnode = new Node(data);
    newnode->next = curr;
    prev->next = newnode;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty!!" << endl;
    }
    int len = getLength(head);
    if (position > len)
    {
        cout << "Enter A Valid Position " << endl;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
        return;
    }
    if (position == len)
    {
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = tail->next;
        Node *temp = tail;
        tail = prev;
        temp->next = NULL;
        delete temp;
        return;
    }
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
    insertHead(head, tail, 10);
    insertHead(head, tail, 20);
    insertTail(head, tail, 30);
    insertTail(head, tail, 40);
    insertPosition(head, tail, 50, 5);
    insertPosition(head, tail, 60, 3);
    // insertTail(head, tail, 100);
    display(head);
    cout << endl;
    // cout << "length of Linked List is :: " << getLength(head) << endl;
    // cout << "Data at head is :: " << head->data << endl
    //      << "Data at tail is :: " << tail->data;

    deleteAtPosition(head,tail,1);
    display(head);
    return 0;
}