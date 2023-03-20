#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;
void majorityElement(vector<int> arr)
// {
//     int maxcount = 0;
//     int index = -1;
//     for(int i = 0; i < arr.size();i++)
//     {
//         int count = 0;
//         for(int  j = 0; j < arr.size();j++)     // Time Complexity :: O(n^2)
//         {                                       // Space Complexity :: O(1)
//             if(arr[i] == arr[j])
//                 count++;
//         }
//         if(count > maxcount)
//         {
//             maxcount = count;
//             cout <<"Count valu ::" << count << endl;
//             index = i;
//         }
//     }
//         if(maxcount > arr.size()/2)
//         {
//             cout << "majority Element is ::" << arr[index] << " ";
//         }
//         else
//         {
//             cout << "No Majority Element";
//         }
// }

{
    int majority = arr[0];
    int count = 1;
    for (int i = 1; i < arr.size(); i++) // Time Complexity :: O(n)
    {                                    // Space Complexity :: O(1)
        if (arr[i] == majority)
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            majority = arr[i];
            count++;
        }
    }
    cout << "Majority Element is ::" << majority;
}

int main()
{
    int n;
    cout << "Enter Value Of N::";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    majorityElement(arr);
    return 0;
}