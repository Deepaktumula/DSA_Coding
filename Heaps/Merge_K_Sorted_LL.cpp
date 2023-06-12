#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Compare
{
public:
    bool operator()(ListNode *a, ListNode *b)
    {
        return a->data > b->data;
    }
};

ListNode *mergeKLists(vector<ListNode *> &lists)
{
    // Create Min Heap
    priority_queue<ListNode *, vector<ListNode *>, Compare> minHeap;

    int k = lists.size();

    if (k == 0)
    {
        return NULL;
    }
    // Place K lists in minHeap
    for (int i = 0; i < k; i++)
    {
        if (lists[i] != NULL)
        {
            minHeap.push(lists[i]);
        }
    }

    ListNode *head = NULL;
    ListNode *tail = NULL;

    while (!minHeap.empty())
    {
        ListNode *temp = minHeap.top();
        minHeap.pop();
        // Temp May or May Not be the first element in Linked List
        if (head == NULL)
        {
            // Temp first ELement of List
            head = temp;
            tail = temp;

            if (temp->next != NULL)
            {
                minHeap.push(temp->next);
            }
        }
        else
        {
            // if Temp is Not the First Element
            tail->next = temp;
            tail = temp;

            if (tail->next != NULL)
            {
                minHeap.push(tail->next);
            }
        }
    }
    return head;
}

void display(ListNode *root)
{
    ListNode *temp = root;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
        {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode *list3 = new ListNode(2);
    list3->next = new ListNode(6);

    vector<ListNode *> lists = {list1, list2, list3};

    ListNode *ans = mergeKLists(lists);
    display(ans);

    return 0;
}