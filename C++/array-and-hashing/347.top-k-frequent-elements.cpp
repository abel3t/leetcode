#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution
{
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map = {};

        for (int num : nums)
        {
            if (map.count(num) > 0)
            {
                map[num]++;
            }
            else
            {
                map[num] = 1;
            }
        }

        vector<pair<int, int>> numsByFrequents;
        vector<int> result = {};

        for (auto it : map)
        {
            numsByFrequents.push_back(it);
        }

        sort(numsByFrequents.begin(), numsByFrequents.end(), cmp);

        for (int i = 0; i < k; i++)
        {
            result.push_back(numsByFrequents[i].first);
        }

        return result;
    }
};
// @lc code=end
