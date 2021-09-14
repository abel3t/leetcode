#
# @lc app=leetcode id=509 lang=python3
#
# [509] Fibonacci Number
#

# @lc code=start
class Solution:
    def fib(self, n: int) -> int:
        if n < 1: return 0
        if n < 3: return 1
        prev1, prev2 = 1, 1
        for i in range(2, n):
            prev1, prev2 = prev1 + prev2, prev1
        return prev1
        
# @lc code=end

