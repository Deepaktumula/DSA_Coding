#include<iostream>
using namespace std;

// Abitility to display the message  in different forms
//     Function Overloading
//     Function Overriding
//     Operator OVerloading
//     Operator OVerriding


//Function Overloading

class A
{
    public:
    int sum(int a,int b)
    {
        return a+b;
    }

    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
};

int main()
{
    A obj;
    cout << obj.sum(10,20) << endl;
    cout << obj.sum(10,20,30) << endl;
    return 0;
}