#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // Base Case
    if (s.empty())
    {
        s.push(target);
        return;
    }
    // Processing
    int topElement = s.top();
    s.pop();
    // Recursive Relation
    insertAtBottom(s, target);
    // Backtracking
    s.push(topElement);
}

void reverseStack(stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        return;
    }
    // Processing
    int target = s.top();
    s.pop();
    // Recursive Relation
    reverseStack(s);
    insertAtBottom(s, target);
}

int main()
{
    stack<int> s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}