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
        min_buy_price, max_profit = prices[0], 0
        for price in prices[1:]:
            if price < min_buy_price:
                min_buy_price = price
            if price - min_buy_price > max_profit:
                max_profit = price - min_buy_price

        return max_profit
# @lc code=end

