#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:
        result, neg_pos = 0, 1

        if -2 ** 31 < result < 2 ** 31:
            if x < 0:
                neg_pos, x = -1, x * neg_pos * -1

            while x:
                last_num = x % 10
                result, x = (result * 10) + last_num, x // 10
                
            if -2 ** 31 < result < 2 ** 31:
                return neg_pos * result
            else:
                return 0
        else:
            return 0

# @lc code=end

