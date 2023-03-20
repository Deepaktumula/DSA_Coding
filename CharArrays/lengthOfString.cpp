#include<iostream>
#include<string.h>
// #include<bits/stdc++.h>
using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while(name[i] != '\0')         // TC :: O(n)
    {                              // SC :: O(1)
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cin >> name;
    cout << getLength(name) << endl;
    cout << "Predefined Function to find Length :: " << strlen(name);
    return 0;
}