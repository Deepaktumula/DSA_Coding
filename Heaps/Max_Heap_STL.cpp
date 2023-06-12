#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    pq.push(7);

    cout << "Top ELement is :: " << pq.top() << endl;

    pq.pop();
    cout << "Top Element is :: " << pq.top() << endl;
    cout << "Size of Max Heap is :: " << pq.size() << endl;

    if (pq.empty())
    {
        cout << "Max Heap is Empty" << endl;
    }
    else
    {
        cout << "Max Heap is Not Empty" << endl;
    }
    return 0;
}