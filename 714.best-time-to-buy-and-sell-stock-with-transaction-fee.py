import sys
#
# @lc app=leetcode id=714 lang=python3
#
# [714] Best Time to Buy and Sell Stock with Transaction Fee
#

# @lc code=start
class Solution:
    def maxProfit(self, prices: List[int], fee: int) -> int:
        prev1, prev2 = 0, -sys.maxsize - 1
        for price in prices:
            prev1, prev2 = max(prev1, prev2 + price), max(prev2, prev1 - price - fee)

        return prev1
# @lc code=end

