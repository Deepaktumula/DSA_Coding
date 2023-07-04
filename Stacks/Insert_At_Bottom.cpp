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
    // BackTracking
    s.push(topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int target = s.top();
    s.pop();
    insertAtBottom(s, target);

    cout << "After Changing the Stack :: " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}