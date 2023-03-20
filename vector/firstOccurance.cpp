#include <iostream>
#include <vector>
using namespace std;
void firstOccurance(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "First Repeating Element is :: " << arr[i];
                return;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    firstOccurance(arr);
    return 0;
}