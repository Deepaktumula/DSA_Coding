#include <iostream>
using namespace std;

int getLength(char name[])
{
    int i = 0;
    int length = 0;
    while (name[i] != '\0') // TC :: O(n)
    // for(;name[i] != '\0';)       // SC :: O(1)
    {
        length++;
        i++;
    }
    return length;
}

void reverseString(char name[])
{
    int i = 0;
    int j = getLength(name) - 1;
    while (i <= j)
    {
        swap(name[i], name[j]); // TC :: O(n/2) -->> O(n) Because of Swaps n/2
        i++;
        j--;
    }
    cout << "Reversed String :: " << name;
}

int main()
{
    char name[100];
    cout << "Enter Name To do Reverse :: ";
    cin >> name;
    reverseString(name);
    return 0;
}