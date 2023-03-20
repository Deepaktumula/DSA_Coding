#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <string.h>
using namespace std;

int minimumTimeDiff(vector<string> timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3, 2));
        int totalminutes = hours * 60 + min;
        minutes.push_back(totalminutes);
    }

    sort(minutes.begin(), minutes.end());

    int mini = INT_MAX;
    for (int i = 0; i < minutes.size() - 1; i++) // (i < minutes.size()-1)  Because We are checking for (minutes[i+1])
    {                                            // So we should not go out of loop...
        int diff = minutes[i + 1] - minutes[i];
        mini = min(diff, mini);
    }
    int lasdiff = minutes[0] + 1440 - minutes[minutes.size() - 1];
    mini = min(lasdiff, mini);
    return mini;
}

int main()
{
    int n;
    cin >> n;
    vector<string> timePoints(n);
    for (int i = 0; i < timePoints.size(); i++)
    {
        cin >> timePoints[i];
    }
    cout << "The Minimum Difference is :: " << minimumTimeDiff(timePoints);
    return 0;
}