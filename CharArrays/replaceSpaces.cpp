#include <iostream>
#include <string.h>
using namespace std;

void replaceSpaces(char sentence[])
{
    int i = 0;
    int n = strlen(sentence);       // TC :: O(n) for this Function
    for (int i = 0; i < n; i++) 
    {                               // SC :: O(1)
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';       // TC :: O(n + n) = O(2n) -->> O(n)
        }
    }
    cout << sentence;
}

int main()
{
    char sentence[100];
    cout << "Enter Sentence :: ";
    cin.getline(sentence, 50);
    replaceSpaces(sentence);
    return 0;
}