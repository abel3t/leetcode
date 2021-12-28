#
# @lc app=leetcode id=198 lang=python3
#
# [198] House Robber
#

# @lc code=start
class Solution:
    def rob(self, nums: List[int]) -> int:
        prev1, prev2 = 0, 0
        for num in nums:
            prev1, prev2 = max(prev1, prev2 + num), prev1
        return prev1
        
# @lc code=end

