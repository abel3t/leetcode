#include <vector>

using namespace std;
/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int len = nums.size();
        int left = 0;
        int right = len - 1;

        while (left <= right)
        {
            if (left == right)
            {
                return nums[left];
            }

            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[len - 1])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        return 0;
    }
};
// @lc code=end
