#
# @lc app=leetcode id=139 lang=python3
#
# [139] Word Break
#

# @lc code=start
class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        dp = [False] * len(s) + [True]

        for i in range(len(s) - 1, -1, -1):
            for word in wordDict:
                lw = len(word)
                if i + lw <= len(s) and s[i:i+lw] == word:
                    dp[i] = dp[i + lw]

                if dp[i]:
                    break

        return dp[0]
# @lc code=end

