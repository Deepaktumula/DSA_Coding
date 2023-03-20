#include <iostream>
using namespace std;
void solve(int arr[])
{
    cout << "Pass by Reference So Size is Changing :: " << sizeof(arr) << endl;
}
int main()
{
    int arr[10];
    cout << "Size of Array :: " << sizeof(arr) << endl;
    solve(arr);
    return 0;
}

// Size of Array :: 40
// Pass by Reference So Size is Changing :: 4