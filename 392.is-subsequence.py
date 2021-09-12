#
# @lc app=leetcode id=392 lang=python3
#
# [392] Is Subsequence
#

# @lc code=start
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j = 0
        if not s: return True
        if not t: return False
        for character in t:
            if j < len(s) and character == s[j]:
                j += 1
            
            if j == len(s):
                return True
        return False
# @lc code=end

