#include<iostream>
using namespace std;
int add(int a,int b){
    int sum = a+ b;
    return sum;
}
int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int sum = add(a,b);
    cout << sum;
    return 0;
}