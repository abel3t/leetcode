#
# @lc app=leetcode id=338 lang=python3
#
# [338] Counting Bits
#

# @lc code=start
class Solution:
    def countBits(self, n: int) -> List[int]:
        bits = [0]
        for i in range(1, n + 1):
            if i % 2 == 0:
                bits.append(bits[i // 2])
            else:
                bits.append(bits[i // 2] + 1)
        
        return bits
# @lc code=end

