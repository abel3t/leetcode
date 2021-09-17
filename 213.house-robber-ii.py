#
# @lc app=leetcode id=213 lang=python3
#
# [213] House Robber II
#

# @lc code=start
class Solution:
    def rob(self, nums: List[int]) -> int:
        if not nums:
            return 0
        if len(nums) == 1:
            return nums[0]
        if len(nums) == 2:
            return max(nums[0], nums[1])
        prev1, prev2 = max(nums[0], nums[1]), nums[0]
        for i in range(2, len(nums) - 1):
            prev1, prev2 = max(prev1, prev2 + nums[i]), prev1
        
        p = prev1
        prev1, prev2 = nums[1], 0
        for i in range(2, len(nums)):
            prev1, prev2 = max(prev1, prev2 + nums[i]), prev1
        return max(p, prev1) 
# @lc code=end

