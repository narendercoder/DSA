#include <bits/stdc++.h>
using namespace std;

// Brute Force TC: O(N^2) SC: O(1)
int maxProfit1(vector<int> &prices)
{
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] > prices[i])
            {
                int diff = prices[j] - prices[i];
                if (diff > maxProfit)
                {
                    maxProfit = diff;
                }
            }
        }
    }
    return maxProfit;
}

// TC: O(N) SC: O(N)
int maxProfit2(vector<int> &prices)
{
    int n = prices.size();
    vector<int> maxPrices(n, 0);
    maxPrices[n - 1] = prices[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        maxPrices[i] = max(maxPrices[i + 1], prices[i]);
    }
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        maxProfit = max(maxProfit, maxPrices[i] - prices[i]);
    }
    return maxProfit;
}

// TC: O(N) SC: O(1)
int maxProfit(vector<int> &prices)
{
    int minSoFar = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        minSoFar = min(minSoFar, prices[i]);
        int profit = prices[i] - minSoFar;
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}

int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};
    int result = maxProfit2(prices);
    cout << result << endl;
}