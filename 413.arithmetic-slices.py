#
# @lc app=leetcode id=413 lang=python3
#
# [413] Arithmetic Slices
#

# @lc code=start
class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        dp, ans = 0, 0
        
        for i in range(2, len(nums)):
            if nums[i] - nums[i-1] == nums[i-1] - nums[i-2]:
                dp += 1
                ans += dp
            else:
                dp = 0
        return ans
# @lc code=end

