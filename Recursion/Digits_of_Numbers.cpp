#include <iostream>
using namespace std;

void digits(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Recursive Relation                //Head Recursion
    digits(n / 10);

    // Processing
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{
    int n;
    cin >> n;
    digits(n);
}