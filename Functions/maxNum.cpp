#include<iostream>
using namespace std;

int maxNum(int a, int b, int c)
{
    if(a > b && a > c){
        return a;
    }
    else if(b > c && b > a){
        return b;
    }
    else{
        return c;
    }
}

    int main()
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max = maxNum(a,b,c);
        cout << max;
        return 0;
    }