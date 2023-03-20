#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int A[],int N,int M,int sol)
{
    int pageSum = 0;
    int studentrequired = 1;
    for(int i = 0; i < N;i++)
    {
        if(A[i] > sol)                  // if No Of Pages(i) in Book  > Mid(max pages to allocate)
        {
            return false;
        }

        if(pageSum + A[i] > sol)        // if no of pages > sol means... We need to allocate that book to another STUDENT
        {
            studentrequired++;
            pageSum = A[i];

            if(studentrequired > M)                   // if Allocation count > No of Students
            {
                return false;
            }
        }
        else
        {
            pageSum += A[i];
        }
    }
    return true;
}

int findPages(int A[],int N,int M)
{
    if(M > N)                               // if   M (no of students) > N (no of books)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(A,A+N,0);                  // Accumulate (Sum of Whole Array Elements)
    int ans = -1;
    while(start <= end)                     // TC :: O(nlog(n))
    {                                       // Sc :: O(1)
        int mid = start +(end - mid)/2;         // Mid = Maximun No of pages to Allocate 

        if(isPossible(A,N,M,mid))           // Chechk whether MID is possible Ans or Not
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int N;
    cout <<"Enter Number of Books :: ";
    cin >> N;
    int M;
    cout <<"Enter Number of Students :: ";
    cin >> M;
    int A[100];
    for(int i = 0; i < N;i++)
    {
        cin >> A[i];
    }
    cout << "Minumum of (Maximun Pages) :: " << findPages(A,N,M);
    return 0;
}