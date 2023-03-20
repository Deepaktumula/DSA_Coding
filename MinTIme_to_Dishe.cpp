#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int minA = 1000000, minB = 1000000, minC = 1000000, minAC = 1000000, minBC = 1000000;

    for (int i = 0; i < n; i++)
    {
        char chefType;
        int time;
        cin >> chefType >> time;

        if (chefType == 'A')
        {
            minA = min(minA, time);
        }
        else if (chefType == 'B')
        {
            minB = min(minB, time);
        }
        else
        {
            minC = min(minC, time);
            minAC = min(minAC, time);
            minBC = min(minBC, time);
        }
    }

    int timeAandB = minA + minB;
    int timeWithC = min(min(minAC + minB, minA + minBC), minC);

    int minTime = min(timeAandB, timeWithC);

    cout << minTime << endl;

    return 0;
}
