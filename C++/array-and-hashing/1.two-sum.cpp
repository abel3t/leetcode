#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            if (map.count(target - nums[i]) > 0)
            {
                return {map[target - nums[i]], i};
            }
            else
            {
                map[nums[i]] = i;
            }
        }

        return {};
    }
};
// @lc code=end
