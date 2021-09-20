#
# @lc app=leetcode id=1567 lang=python3
#
# [1567] Maximum Length of Subarray With Positive Product
#

# @lc code=start
class Solution:
    def getMaxLen(self, nums: List[int]) -> int:
        if not nums:
            return 0

        pos = 1 if nums[0] > 0 else 0
        result = pos
        neg = 1 if nums[0] < 0 else 0

        for i in range(1, len(nums)):
            curr = nums[i]
            if not curr:
                pos, neg = 0, 0
            else:
                next_neg = neg + 1 if neg > 0 else 0
                next_pos = pos + 1
                pos = next_neg if curr < 0 else next_pos
                neg = next_pos if curr < 0 else next_neg
            result = max(result, pos)
        
        return result

# @lc code=end

