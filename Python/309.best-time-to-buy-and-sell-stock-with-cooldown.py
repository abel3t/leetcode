#
# @lc app=leetcode id=309 lang=python3
#
# [309] Best Time to Buy and Sell Stock with Cooldown
#

# @lc code=start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        prev1, prev2, max_profit = 0, 0, -prices[0]

        for price in prices:
            prev1, prev2, max_profit = max(prev1, price + max_profit), prev1, max(max_profit, prev2 - price)
        
        return prev1
# @lc code=end

