#include<iostream>
using namespace std;

int areaofCircle(int r)
{
    int area;
    area = 3.14 * r*r;
    return area;
}
int main()
{
    int r;
    cin >> r;
    cout << "Area of circle:: " << areaofCircle(r);
    return 0;
}