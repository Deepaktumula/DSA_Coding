#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n-i-1; ++j) {
		        int k=0;
                cout <<" ";
            if(j<i+1){
                cout<<"*";
            }
            else if(k < 2*i+1){
                if(k==0 || i == n - 1){
                    cout<<" ";
                }
                else{
                    cout<<"* ";
                }
            }
            else{
                cout<<" ";
            } k++;
        }
        cout<<endl;
    }
}