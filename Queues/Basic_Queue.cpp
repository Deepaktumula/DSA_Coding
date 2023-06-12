#include <iostream>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // Parameterized Constructor
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Inserting Element in QUEUE
    void push(int data)
    {
        // Check for Overfloe]w
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    // Removing Element from Queue
    void pop()
    {
        // Check for Underflow
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(6);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << "Size of Queue :: " << q.getSize() << endl;
    q.pop();
    cout << "Front Element of Queue :: " << q.getFront() << endl;

    if (q.isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is Not Empty" << endl;
    }

    // cout << "Size of Queue :: " << q.getSize() << endl;
    return 0;
}
