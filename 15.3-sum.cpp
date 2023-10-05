#include <vector>
#include <set>

using namespace std;

/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result = {};

        sort(nums.begin(), nums.end());

        set<vector<int>> set;

        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0)
                {
                    set.insert({nums[i], nums[j], nums[k]});
                    ++j;
                    --k;
                }

                if (sum < 0)
                {
                    ++j;
                }

                if (sum > 0)
                {
                    --k;
                }
            }
        }

        for (auto it : set)
        {
            result.push_back(it);
        }

        return result;
    }
};
// @lc code=end
