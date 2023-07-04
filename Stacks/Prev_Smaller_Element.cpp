#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> PrevSmallerElement(vector<int> &v)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());

    // Left to Right 
    for (int i = 0; i < v.size(); i++)
    {
        int curr = v[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    vector<int> ans = PrevSmallerElement(v);
    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}