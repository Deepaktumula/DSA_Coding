#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 1, 3, 4, 5};
    vector<int> brr{1, 2, 1, 3};
    vector<int> crr;
    int sizea = 6;
    int sizeb = 5;
    for (int i = 0; i < sizea; i++)
    {
        // int element = arr[i];
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT_MIN;
                // cout << brr[j] << endl;
                crr.push_back(arr[i]);
            }
        }
    }
    for (auto val : crr)
    {
        cout << val << " ";
    }
    // for(int i = 0;i < crr.size();i++)
    // {
    //     cout << crr[i] << " ";
    // }
    return 0;
}