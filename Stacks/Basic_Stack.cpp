#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        // Check for Empty
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "There is No Element in Stack" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // Creation
    Stack s(5);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;
    cout << s.getSize() << endl;
    return 0;
}
