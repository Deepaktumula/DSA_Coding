#include <iostream>
#include <string.h>
using namespace std;

void toUpperCase(char ch[])
{
    int n = strlen(ch) - 1;
    for (int i = 0; i <= n; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
    cout << "After Converting to UpperCase :: " << ch << endl;
}

void toLowerCase(char ch[])
{
    int n = strlen(ch) - 1;
    for (int i = 0; i <= n; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
    cout << "After Converting to LowerCase :: " << ch;
}
int main()
{
    char ch[100];
    cout << "Enter name to Covert Into Upper case :: ";
    cin >> ch;
    toUpperCase(ch);
    toLowerCase(ch);
    return 0;
}