#
# @lc app=leetcode id=746 lang=python3
#
# [746] Min Cost Climbing Stairs
#

# @lc code=start
class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        prev1, prev2 = 0, 0
        for i in range(0, len(cost) - 1):
            prev1, prev2 =  min(prev1 + cost[i + 1], prev2 + cost[i]), prev1
        return prev1
# @lc code=end
