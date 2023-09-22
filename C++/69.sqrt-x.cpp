/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
        {
            return x;
        }

        int start = 0, end = x, ans = 0;

        while (start < end)
        {
            int mid = start + (end - start) / 2;

            if (x / mid >= mid)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }

        return ans;
    }
};
// @lc code=end
