#include <bits/stdc++.h>
using namespace std;

// LeetCode 121: Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price);
            profit = max(profit, price - minPrice);
        }
        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << sol.maxProfit(prices) << endl; // 5
    return 0;
}
