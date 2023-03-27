#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    // Base Case
    if (i >= j)
    {
        cout << str;
        return;
    }

    // Processing
    swap(str[i], str[j]);

    // Recursive call
    return reverse(str, i + 1, j - 1);
}

int main()
{
    string str;
    cin >> str;
    int i = 0;
    int j = str.size() - 1;
    reverse(str, i, j);
    return 0;
}