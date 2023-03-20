#include <iostream>
using namespace std;
int update(int *a, int *b)
{
    *a = 100;
    *b = 200;
    return *a, *b;
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    cout << "Array is Before Updating :: " << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl
         << endl;
    int *ptr = &arr[1];
    int *qtr = &arr[2];
    update(ptr, qtr);
    cout << "Array is Updated :: " << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
    return 0;
}

// Array is Before Updating ::
// 10 20 30 40

// Array is Updated ::
// 10 100 200 40