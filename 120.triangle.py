#
# @lc app=leetcode id=120 lang=python3
#
# [120] Triangle
#
"""
[2, 3, ]
2
2 -> 3

"""

# @lc code=start
class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        total = []
        col = len(triangle[-1])
        row = len(triangle)
        for i in range(col):
            total.append(triangle[-1][i])

        for i in range(row - 2, -1, -1):
            for j in range(len(triangle[i])):
                total[j] = triangle[i][j] + min(total[j], total[j+1])

        return total[0]

# @lc code=end

