#include <iostream>
using namespace std;

class CirQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Inserting Element in Circular Queue
    void push(int data)
    {
        // Check for OverFlow
        if ((front == 0) && (rear == size - 1) && (rear = front - 1))
        {
            cout << "Circular Queue is Full, Cannot Insert " << endl;
        }
        // Single Element Case-----First Element
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        // Circular Queue Nature
        else if ((rear == size - 1) && (front != 0))
        {
            rear = 0;
            arr[rear] = data;
        }
        // Normal Elements
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    // Removing Element in Circular Queue
    void pop()
    {
        // Check for UnderFlow
        if (front == -1)
        {
            cout << "Circular Queue is Empty " << endl;
        }
        // Single Element
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // Circular Queue Nature
        else if (front == size - 1)
        {
            front = 0;
        }
        // Normal Case
        else
        {
            front++;
        }
    }
};

int main()
{
    CirQueue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    return 0;
}
