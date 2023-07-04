#include <iostream>
#include <stack>
using namespace std;

bool removeRedundancy(string &str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // if Opening brackets and Operators, then Push
        if (ch == '(' || ch == '{' || ch == '[' || ch == '+' || ch == '*' || ch == '-' || ch == '/')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            bool operatorFound = false;

            // Check if the top of the stack is an operator
            while (!s.empty() && s.top() != '(' && s.top() != '{' && s.top() != '[')
            {
                char topChar = s.top();
                s.pop();

                if (topChar == '+' || topChar == '-' || topChar == '*' || topChar == '/')
                {
                    operatorFound = true;
                }
            }

            // If there was no operator found, then redundant brackets are present
            if (!operatorFound)
            {
                return true;
            }

            // Pop the opening bracket from the stack
            if (!s.empty())
            {
                s.pop();
            }
            else
            {
                // Opening bracket not found, so redundant brackets are present
                return true;
            }
        }
    }

    // If the stack is not empty at the end, then redundant brackets are present
    return !s.empty();
}

int main()
{
    string str = "(a+b + (a))";
    if (removeRedundancy(str))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
