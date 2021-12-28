#
# @lc app=leetcode id=264 lang=python3
#
# [264] Ugly Number II
#

# @lc code=start
class Solution:
    def nthUglyNumber(self, n: int) -> int:
        ugly_numbers = [1]
        i2 = i3 = i5 = 0

        for _ in range(1, n):
            u_2 = ugly_numbers[i2] * 2
            u_3 = ugly_numbers[i3] * 3
            u_5 = ugly_numbers[i5] * 5

            u = min(u_2, u_3, u_5)
            ugly_numbers.append(u)
            
            if u == u_2:
                i2 += 1
            if u == u_3:
                i3 += 1
            if u == u_5:
                i5 += 1

        return ugly_numbers[-1]
        
# @lc code=end

