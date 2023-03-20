#include <iostream>
#include <vector>
using namespace std;
int missingElement(vector<int> arr, int total)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }
    int missing = (total * (total + 1) / 2) - sum;
    return missing;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int total;
    cout << "Total value :: ";
    cin >> total;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Missing Element is :: " << missingElement(arr, total);
    return 0;
}