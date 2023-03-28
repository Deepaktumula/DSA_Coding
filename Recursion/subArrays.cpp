#include <iostream>
#include <vector>
using namespace std;

void printSubarrays_util(vector<int> &nums, int start, int end)
{
    // Base Case
    if (end == nums.size())
    {
        return;
    }

    // Processing
    for (int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Recursive Call
    printSubarrays_util(nums, start, end + 1);
}

void printSubarrays(vector<int> &nums)
{
    // Looping for Every element bcz we need all subarrays
    for (int start = 0; start < nums.size(); start++)
    {
        int end = start;
        printSubarrays_util(nums, start, end);
    }
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    printSubarrays(nums);
    return 0;
}