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

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverseLL(Node *&head)
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

Node *addTwoLinkedLists(Node *&head1, Node *&head2)
{
    // Check for Empty LInked LIsts
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    // Step 1: Reverse the LInked LIsts
    head1 = reverseLL(head1);
    head2 = reverseLL(head2);
    // Step 2: Add two reversed Linked LIsts
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;
    while (head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);

        if (ansHead == NULL)
        {
            ansHead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // if Head1 Linked List is More than Head2 LISt ::
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    // if Head2 Linked List is More than Head1 LISt ::
    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    // Step 3: Reverse again the AnsHead Node to get correct Ans
    ansHead = reverseLL(ansHead);
    return ansHead;
}

int main()
{
    Node *head1 = new Node(2);
    Node *second1 = new Node(6);
    head1->next = second1;

    Node *head2 = new Node(2);
    Node *second2 = new Node(3);
    Node *third2 = new Node(4);
    head2->next = second2;
    second2->next = third2;

    display(head1);
    cout << endl;
    display(head2);
    cout << endl
         << endl;
    Node *newHead = addTwoLinkedLists(head1, head2);
    display(newHead);
    cout << endl;
    return 0;
}