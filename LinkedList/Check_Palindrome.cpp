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
        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted value for Memory Free is :: " << val << endl;
    }
};

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
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
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
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}

// Node *reverseLL(Node *&prev, Node *&curr)
// {
//     // Base Case
//     if (curr == NULL)
//     {
//         return prev;
//     }
//     // 1 ek Case Hum Solve Karenga Baakhi Recursion Sambhal Lega
//     Node *forward = curr->next;
//     curr->next = prev;
//     reverseLL(curr, forward);
// }

Node *reverseLL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool checkPalindrome(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is Empty" << endl;
        return true;
    }
    if (head->next == NULL)
    {
        return true;
    }
    // Step A: Find the Middle Node
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    // Step B: Slow Pointer is Pointing to Middle Node
    // Reverse the Linked List After Middle Node
    Node *reverseLLHead = reverseLL(slow->next);
    // Join the reversedLL into Left Part
    slow->next = reverseLLHead;
    // Step C: Start Comparing Both Original HEAD and ReverseLLHead
    Node *temp1 = head;
    Node *temp2 = reverseLLHead;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            // Not Palindrome
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 10);
    display(head);
    cout << endl;
    bool isPalindrome = checkPalindrome(head);
    if (isPalindrome)
    {
        cout << "LL is Palindrome" << endl;
    }
    else
    {
        cout << "LL is Not a Palindrome" << endl;
    }
    return 0;
}