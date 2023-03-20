#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;

    int ans = ((sizeof(arr)) / sizeof(int));
    cout << ans << endl;

    arr.push_back(5);
    arr.push_back(6);
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    vector<int> brr(10, -1);
    for (auto val : brr)
    {
        cout << val << " ";
    }
    cout << endl
         << endl;
    vector<int> crr(10, 100);
    for (auto val : crr)
    {
        cout << val << " ";
    }
    cout << endl
         << endl;
    vector<int> drr{1, 2, 3, 4, 5};
    for (auto val : drr)
    {
        cout << val << " ";
    }
    cout << endl
         << endl;
    cout << "Checking Empty or not :: " << drr.empty();
    return 0;
}