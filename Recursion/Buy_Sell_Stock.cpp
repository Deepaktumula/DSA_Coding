#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void maxProfitFinder(vector<int> &prices, int i, int &minPrice, int &maxProfit)
{
    // Base Case
    if (i >= prices.size())
    {
        return;
    }

    // Procesing
    if (prices[i] < minPrice)
        minPrice = prices[i];
    if ((prices[i] - minPrice) > maxProfit)
        maxProfit = prices[i] - minPrice;

    // Recursive Call
    return maxProfitFinder(prices, i + 1, minPrice, maxProfit);
}

int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    int i = 0;
    maxProfitFinder(prices, i, minPrice, maxProfit);
    cout << maxProfit ;
    return 0;
}
