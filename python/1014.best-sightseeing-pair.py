#
# @lc app=leetcode id=1014 lang=python3
#
# [1014] Best Sightseeing Pair
#

# @lc code=start
class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        max_score, max_value, max_value_index = values[0], values[0], 0
        for i in range(1, len(values)):
            max_score = max(max_score, values[i] + max_value + max_value_index - i)
            if max_value - i + max_value_index < values[i]:
                max_value, max_value_index = values[i], i
        
        return max_score
# @lc code=end

