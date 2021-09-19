#
# @lc app=leetcode id=918 lang=python3
#
# [918] Maximum Sum Circular Subarray
#

# @lc code=start
class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        n = len(nums)
        ans1, ans2 = 0, nums[0]
        temp1, temp2, total = nums[0], nums[0], nums[0]

        for i in range(1, n):
            temp1 = min(temp1 + nums[i], nums[i])
            ans1 = min(temp1, ans1)

            temp2 = max(temp2 + nums[i], nums[i])
            ans2 = max(temp2, ans2)

            total += nums[i]
        
        ans1 = total - ans1
        return ans2 if ans1 == 0 else max(ans1, ans2)
# @lc code=end

