#include <iostream>
using namespace std;

void printPermutations(string &str, int i)
{
    // Base Case
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }

    // Processing Swapping
    for (int j = i; j < str.length(); j++)
    {
        // Swap
        swap(str[i], str[j]);

        // Recursive Relation
        printPermutations(str, i + 1);

        // backtracking
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "abc";
    int i = 0;
    printPermutations(str, i);
    return 0;
}