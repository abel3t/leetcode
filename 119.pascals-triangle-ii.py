#
# @lc app=leetcode id=119 lang=python3
#
# [119] Pascal's Triangle II
#

# @lc code=start
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex < 1: return [1]
        if rowIndex < 2: return [1, 1]
        prev = [1, 1]
        for _ in range(1, rowIndex):
            row = []
            for i in range(1, len(prev)):
                row.append(prev[i - 1] + prev[i])
            prev = [1] + row + [1]
        return prev
# @lc code=end

