#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{6, 7, 8, 9};
    vector<int> crr;
    int sizea = 5;
    int sizeb = 4;
    for (int i = 0; i < sizea; i++)
    {
        crr.push_back(arr[i]);
    }
    for (int j = 0; j < sizeb; j++)
    {
        crr.push_back(brr[j]);
    }
    for (auto val : crr)
    {
        cout << val << " ";
    }
    return 0;
}