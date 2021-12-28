#
# @lc app=leetcode id=70 lang=python3
#
# [70] Climbing Stairs
#

# @lc code=start
class Solution:
    def climbStairs(self, n: int) -> int:
        if n < 3:
            return n

        step_prev1, step_prev2 = 2, 1
        for _ in range(2, n):
            step_prev1, step_prev2 = step_prev1 + step_prev2, step_prev1
        return step_prev1
        
# @lc code=end

