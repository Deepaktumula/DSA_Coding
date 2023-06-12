#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(5);
    q.push(3);
    // Size of The Queue
    cout << "Size OF the Queue ::" << q.size() << endl;
    q.pop();
    if (q.empty())
    {
        cout << "Queue is Empty " << endl;
    }
    else
    {
        cout << "Queue is Not Empty" << endl;
    }
    cout << "Front Element in Queue :: " << q.front() << endl;
    return 0;
}