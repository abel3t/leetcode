#
# @lc app=leetcode id=152 lang=python3
#
# [152] Maximum Product Subarray
#

# @lc code=start
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        max_product, min_dp_product, max_dp_product = nums[0], nums[0], nums[0]
        
        for i in range(1, len(nums)):
            if nums[i] < 0:
                max_dp_product, min_dp_product = min_dp_product, max_dp_product
            max_dp_product = max(max_dp_product * nums[i], nums[i])
            min_dp_product = min(min_dp_product * nums[i], nums[i])
            max_product = max(max_product, max_dp_product)
        
        return max_product

# @lc code=end

