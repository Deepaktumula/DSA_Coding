#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int target)
{
    // base Case
    if (s.empty())
    {
        s.push(target);
        return;
    }
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }
    // STep A: Pro essing
    int topElement = s.top();
    s.pop();
    insertSorted(s, target);
    // BackTracking
    s.push(topElement);
}

void sortStack(stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        return;
    }
    // Processing
    int topElement = s.top();
    s.pop();
    // Recursive Relation
    sortStack(s);
    insertSorted(s, topElement);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(13);
    s.push(5);
    s.push(90);

    sortStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}