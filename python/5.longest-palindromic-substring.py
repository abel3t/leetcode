#
# @lc app=leetcode id=5 lang=python3
#
# [5] Longest Palindromic Substring
#

# @lc code=start
class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        dp = [[False]*n for _ in range(n)]                    
            
        start, end = 0, 0
        for i in range(n-1, -1, -1):
            
            dp[i][i] = True
            if i > 0:
                dp[i-1][i] = s[i-1]==s[i]
                
            for j in range(i+1, n):                
                                                
                if not dp[i][j]:                    
                    dp[i][j] = dp[i+1][j-1] and s[i] == s[j]
                
                if dp[i][j] == True and j - i > end - start:                    
                    start, end = i, j
                      
        return s[start: end+1]

# @lc code=end

