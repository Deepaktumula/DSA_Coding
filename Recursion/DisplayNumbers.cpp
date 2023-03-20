#include <iostream>
using namespace std;

void counting(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Recursive Relation
    counting(n - 1);

    // Processing
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    counting(n);
    return 0;
}
