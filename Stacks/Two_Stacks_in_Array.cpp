#include <iostream>
using namespace std;

class Stack
{
public:
    int top1;
    int top2;
    int *arr;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // From Front Size of Stack
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "OverFlow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "UnderFlow" << endl;
        }
        else
        {
            top1--;
        }
    }

    // Now From Rear Size of Stack
    void push2(int data)
    {
        if (top2 - top1 == -1)
        {
            cout << "OverFlow" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout << "UnderFlow" << endl;
        }
        else
        {
            top2++;
        }
    }
    
    void print()
    {
        cout << endl;
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(10);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    s.push2(130);
    s.print();
    s.push2(140);
    s.print();

    s.pop1();
    s.print();
    s.pop1();
    s.print();

    s.pop1();
    s.print();

    s.pop1();
    s.print();

    s.pop1();
    s.print();

    s.push2(1000);
    s.print();

    s.pop1();
    s.print();
    return 0;
}