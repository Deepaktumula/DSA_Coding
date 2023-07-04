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
};

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

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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

// Iterative Approach

// Node *printKthElement(Node *&head, int k)
// {
//     int len = getLength(head);
//     int newLen = len - k;
//     Node *temp = head;
//    // Because 1 Based Index from front Side
//     while(newLen > 1)
//     {
//         newLen--;
//         temp = temp->next;
//     }
//     return temp;
// }

// Recursive Approach

void printKthElementRecursive(Node *&head, int &k, int &ans)
{
    // Base case
    if (head == NULL)
    {
        return;
    }
    printKthElementRecursive(head->next, k, ans);
    // Because 0 Based Index from back Side
    if (k == 0)
    {
        ans = head->data;
    }
    k--;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int k = 2;
    
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 0);
    display(head);
    cout << endl;
    // Node *ans = printKthElement(head, k);
    // cout << "Answer of Iterative approach :: " << ans->data << endl;
    int ans = -1;
    printKthElementRecursive(head,k,ans);
    cout << "Answer of Recursive approach :: " << ans << endl;
    return 0;
}