#include <iostream>
#include <vector>
using namespace std;

int uniqueElement(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
        cout << ans << " ";
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the no of Elements::";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements::" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "The Unique Element is ::" << uniqueElement(arr);
    return 0;
}