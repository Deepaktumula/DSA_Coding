#include <iostream>
#include <stack>
using namespace std;

void middleElement(stack<int> &s, int totalSize)
{
    // Base case
    if (s.size() == totalSize / 2 + 1)
    {
        cout << "Middle Element is :: " << s.top() << endl;
        return;
    }
    // processing
    int temp = s.top();
    s.pop();
    // RecursiveRelation
    middleElement(s, totalSize);
    // BackTracking
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int totalSize = s.size();
    middleElement(s, totalSize);

    // cout << "Elements Present in Stack are :: " << endl;
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    return 0;
}