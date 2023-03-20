#include <iostream>
using namespace std;
void solve(int *ptr)
{
    *ptr = *ptr + 10;

}
int main()
{
    int a = 5;
    int *ptr = &a;

    solve(ptr);
    cout << *ptr ;
    return 0;
}