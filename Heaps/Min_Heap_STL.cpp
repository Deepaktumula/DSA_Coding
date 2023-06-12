#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    pq.push(7);

    cout << "Size of Min Heap :: " << pq.size() << endl;

    cout << "Top Element in Min Heap :: " << pq.top() << endl;
    pq.pop();
    cout << "Top Element in Min Heap :: " << pq.top() << endl;
    cout << "Size of Min Heap :: " << pq.size() << endl;

    if (pq.empty())
    {
        cout << "Min Heap is Empty" << endl;
    }
    else
    {
        cout << "Min Heap is Not Empty" << endl;
    }
    return 0;
}