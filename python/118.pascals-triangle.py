#
# @lc app=leetcode id=118 lang=python3
#
# [118] Pascal's Triangle
#


# @lc code=start
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows < 2: return [[1]]
        if numRows < 3: return [[1], [1] * numRows]
        
        result = [[1], [1,1]]
        for i in range(2, numRows):
            row = []
            prev = result[i - 1]
            for j in range(0, len(prev) - 1):
                row.append(prev[j] + prev[j+1])
            row = [1] + row + [1]
            result.append(row)
        return result
# @lc code=end
