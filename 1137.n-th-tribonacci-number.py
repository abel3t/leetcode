#
# @lc app=leetcode id=1137 lang=python3
#
# [1137] N-th Tribonacci Number
#

# @lc code=start
class Solution:
    def tribonacci(self, n: int) -> int:
        if n < 1: return 0
        if n < 3: return 1
        prev1, prev2, prev3 = 1, 1, 0
        for _ in range(2, n):
            prev1, prev2, prev3 = prev1 + prev2 + prev3, prev1, prev2
        return prev1
# @lc code=end

