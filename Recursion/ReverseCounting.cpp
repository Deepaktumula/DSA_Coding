#include <iostream>
using namespace std;

void counting(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Processing
    cout << n << " ";

    // Recursive Relation
    return counting(n - 1);
}

int main()
{
    int n;
    cin >> n;
    counting(n);
    return 0;
}
