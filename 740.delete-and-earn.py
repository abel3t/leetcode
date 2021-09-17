#
# @lc app=leetcode id=740 lang=python3
#
# [740] Delete and Earn
#

# @lc code=start
class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        max_num = -1
        for num in nums:
            max_num = max(num, max_num)
        arr = [0] * (max_num + 1)

        for num in nums:
            arr[num] += 1

        prev1, prev2 = 0, 0
        for i in range(len(arr)):
            prev1, prev2 = max(prev1, arr[i] * i + prev2), prev1
        
        return prev1

# @lc code=end

