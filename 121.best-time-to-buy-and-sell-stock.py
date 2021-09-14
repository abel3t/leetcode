#
# @lc app=leetcode id=121 lang=python3
#
# [121] Best Time to Buy and Sell Stock
#

"""
maxProfit

"""

# @lc code=start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_buy_price = prices[0]
        max_profit = 0
        for i in range(1, len(prices)):
            if prices[i] < min_buy_price:
                min_buy_price = prices[i]
            if prices[i] - min_buy_price > max_profit:
                max_profit = prices[i] - min_buy_price

        return max_profit
# @lc code=end

