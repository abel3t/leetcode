#
# @lc app=leetcode id=22 lang=python3
#
# [22] Generate Parentheses
#

# @lc code=start
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        if n < 1:
            return [""]
        elif n == 1:
            return ["()"]
        
        current = set()
        current.add("()")

        for _ in range(2, n + 1):
            next = set()
            for s in current:
                for i in range(len(s)):
                    next.add(s[:i]+"()"+s[i:])
            current = next
        return list(current)

# @lc code=end

