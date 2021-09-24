#
# @lc app=leetcode id=91 lang=python3
#
# [91] Decode Ways
#
"""
226
2 22



"""
# @lc code=start
class Solution:
    def numDecodings(self, s: str) -> int:
        n, current, prev1, prev2 = len(s), 0, 1, 1

        if s[0] == '0':
            return 0

        for i in range(2, n + 1):
            one, two = int(s[i - 1]), int(s[i-2:i])

            if one >= 1:
                current += prev1
            if 10 <= two <= 26:
                current += prev2

            prev1, prev2, current = current, prev1, 0

        return prev1

# @lc code=end

