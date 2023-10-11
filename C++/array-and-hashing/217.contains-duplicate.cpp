/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, bool> map;

        for (int i = 0; i < nums.size(); i++)
        {
            if (map.count(nums[i]) > 0)
            {
                return true;
            }

            map[nums[i]] = true;
        }

        return false;
    }

    bool containsDuplicateV2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }

        return false;
    }
};
// @lc code=end
