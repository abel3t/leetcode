/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxP = 0;

        int l = 0, r = 1;
        while (r < prices.size())
        {
            if (prices[l] < prices[r])
            {
                maxP = max(maxP, prices[r] - prices[l]);
                r++;
            }
            else
            {
                l = r;
                r++;
            }
        }
    }
};
// @lc code=end
