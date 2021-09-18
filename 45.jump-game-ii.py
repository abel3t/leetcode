#
# @lc app=leetcode id=45 lang=python3
#
# [45] Jump Game II
#

# @lc code=start
class Solution:
    def jump(self, nums: List[int]) -> int:
        current, prev, count, n = 0, 0, 0, len(nums)
        for i in range(n - 1):
            current = max(current, nums[i] + i)
            if current >= n - 1:
                return count + 1
            if i == prev:
                prev = current
                count += 1
        return count 

# @lc code=end

