// 121.Best time to buy and sell stock 
// You are given an array prices where prices[i] is the price of a given stock on the ith day. 
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. 
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. 
// Example 1: 
// Input: prices = [7,1,5,3,6,4] 
// Output: 5 
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5. 
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell. 
  
#include <bits/stdc++.h>
using namespace std;
// https://youtu.be/BSRTUtvJSIk
// Algorithm / Intuition
// Intuition: We will linearly travel the array. We can maintain a
// minimum from the start of the array and compare it with every element of the array,
// if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.
int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int diff = prices[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, prices[i]);
    }
    return profit;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}
