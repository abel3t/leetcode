#
# @lc app=leetcode id=746 lang=python3
#
# [746] Min Cost Climbing Stairs
#

# @lc code=start
class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        prev1 = 0
        prev2 = 0
        for i in range(1, len(cost)):
            min_cost = min(prev1 + cost[i], prev2 + cost[i - 1])
            prev1, prev2 = min_cost, prev1
        return prev1
# @lc code=end

