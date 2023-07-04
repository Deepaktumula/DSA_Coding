#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str)
{
    stack<char> s;

    // Iterating Every Character in String
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // if Opening Bracket then Push into Stack
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        // if Closing Bracket then check correspodnig Openig Bracket and Cancel Out Both By Popping Out
        else
        {
            if (!s.empty())
            {
                char topCh = s.top();
                if (ch == ')' && topCh == '(')
                {
                    // If Brackets Matching
                    s.pop();
                }
                else if (ch == '}' && topCh == '{')
                {
                    s.pop();
                }
                else if (ch == ']' && topCh == '[')
                {
                    s.pop();
                }
                else
                {
                    // Brackets Not Macthing
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    // Out from Loop check STACK EMPTY or Not
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "()[]{}";
    if (isValid(str))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}