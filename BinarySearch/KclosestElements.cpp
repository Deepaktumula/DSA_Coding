#include<iostream>
#include<vector>
using namespace std;
vector<int> kClosestElements(vector<int> arr,int k,int x)
{
    int i = 0;
    int j = arr.size()-1;
    while(j - i >= k)
    {
        if(x - arr[i] > arr[j] - x)
        {
            i++;
        }
        else{
            j--;
        }
    }
    // vector<int> ans;
    // for(int low = i;low <= j;low++)
    // {
    //     ans.push_back(arr[low]);
    // }
    // return ans;
    return vector<int>(arr.begin() + i,arr.begin()+j+1);
}
int main()
{
    int n;
    cout << "Enter Size of Elements :: ";
    cin >> n;
    int x;
    cout << "Enter value of X :: ";
    cin >> x;
    int k;
    cout << "Enter value of K :: ";
    cin >> k;
    vector<int> arr(n);
    for(int i = 0; i < arr.size();i++)
    {
        cin >> arr[i];
    }
    
    vector<int> Closest =  kClosestElements(arr,k,x);
    for(int i = 0; i < Closest.size();i++)
    {
       cout << Closest[i] << " ";
    }
    return 0;
}