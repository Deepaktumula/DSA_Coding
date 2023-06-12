// Max-Heap

#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int getKthSmallestElement(int arr[], int n, int k) // TC:-O(n) SC:-O(k)
{
    // Create a Max Heap
    priority_queue<int> pq;

    // Insert K Elements
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // For Remaining Elemets, Push only if Smaller than Top Element
    for (int i = k; i < n; i++)
    {
        int element = arr[i];
        if (element < pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }
    int ans = pq.top();
    return ans;
}

int main()
{
    int arr[] = {10, 5, 20, 4, 15};
    int n = 5;
    int k = 6;
    int ans = getKthSmallestElement(arr, n, k);
    cout << "Kth Smallest ELement is :: " << ans << endl;
    return 0;
}