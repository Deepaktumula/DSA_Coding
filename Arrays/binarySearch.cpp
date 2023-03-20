#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    while( start <= end)
    {
        if( arr[mid] == key)
        {
            return mid;
        }
        else if (key < mid)
        {
            end = mid -1;
        }
        else if(key > mid)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the Number of Elements ::";
    cin >> n;
    int key;
    cout << "Enter Key Value ::";
    cin >> key;
    int size = n;
    int arr[10];
    for(int i =0; i < n;i++)
    {
        cin >> arr[i];
    }
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // int key;
    // cin >> key;
    cout << "Found at Index " << binarySearch(arr,size,key);
}