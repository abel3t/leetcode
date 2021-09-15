#
# @lc app=leetcode id=120 lang=python3
#
# [120] Triangle
#
"""
4,1,8,3 => total = [4,1,8,3]
6,5,7 => total = [7,6,10, 3]
3,4 => total = [9,10, 10, 3]
2 => total = [11, 10, 10, 3]

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
            print(total)
            for j in range(len(triangle[i])):
                total[j] = triangle[i][j] + min(total[j], total[j+1])
        print(total)
        return total[0]

# @lc code=end

