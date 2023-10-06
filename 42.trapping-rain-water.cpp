#include <vector>

using namespace std;

/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int totalWater = 0;
        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        while (left < right)
        {
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);

            if (leftMax < rightMax)
            {
                totalWater += (leftMax - height[left]);
                ++left;
            }
            else
            {
                totalWater += (rightMax - height[right]);
                --right;
            }
        }

        return totalWater;
    }
};
// @lc code=end
