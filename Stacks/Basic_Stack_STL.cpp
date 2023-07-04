#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    // Insertion
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    cout << "Size of Stack :: " << s.size() << endl;
    cout << "Top Element of Stack :: " << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        // Deletion
        s.pop();
    }
    return 0;
}