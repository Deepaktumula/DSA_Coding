#include<iostream>
using namespace std;

char grade(int marks)
{
    if(marks >= 90)
        return 'A';
    else if(marks >= 80)
        return 'B';
    else if(marks >= 70)
        return 'c';
    else if(marks >= 60)
        return 'D';
    else if(marks >= 50)
        return 'E';
    else 
        return 'F';
}

int main(){
    int marks;
    cin >> marks;
    char finalgrade = grade(marks);
    cout << finalgrade;
    return 0;
}