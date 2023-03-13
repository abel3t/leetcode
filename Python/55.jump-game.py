#
# @lc app=leetcode id=55 lang=python3
#
# [55] Jump Game
#

# @lc code=start
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n, power = len(nums), 0

        for i in range(n):
            if nums[i] >= n - i - 1:
                return True

            if nums[i] == 0 and i != n - 1 and not power:
                return False

            power = max(power - 1, nums[i] - 1)
        return True
# @lc code=end

