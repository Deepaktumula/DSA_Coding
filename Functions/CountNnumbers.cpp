#include<iostream>
using namespace std;
void countNumbers(int n)
{
    for(int i=1;i <=n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    countNumbers(n);
    return 0;

}