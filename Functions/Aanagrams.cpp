#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "race";
    string s2 = "care";
    
    int n1 = s1.length();
    int n2 = s2.length();
    if(n1 != n2)
    {
        cout << "Not Anagrams" << " ";
        return 0;
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "Not Anagrams" << " ";
            return 0;
        }
    }
    cout << "Anagrams" << " ";
}