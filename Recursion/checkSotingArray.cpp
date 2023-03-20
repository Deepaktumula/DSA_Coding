#include <iostream>
#include <vector>
using namespace std;

bool chechkSorted(vector<int> arr, int i, int &n)
{
    //Base Case
    if(i == n-1)
    {
        return true;
    }

    //Processing
    if(arr[i+1] < arr[i])
    {
        return false;
    }
    //Recursive Relation
    return chechkSorted(arr,i+1,n);

}
int main()
{
    int n;
    cout << "Enter size of Array :: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    cout << chechkSorted(arr, i, n);
}
