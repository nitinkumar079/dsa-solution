from typing import List


# LeetCode 121: Best Time to Buy and Sell Stock
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float("inf")
        profit = 0
        for price in prices:
            min_price = min(min_price, price)
            profit = max(profit, price - min_price)
        return profit


if __name__ == "__main__":
    print(Solution().maxProfit([7, 1, 5, 3, 6, 4]))  # 5
