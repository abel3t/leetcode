/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> map;

        for (auto str : strs)
        {
            string s = str;
            sort(s.begin(), s.end());

            map[s].push_back(str);
        }

        vector<vector<string>> result;

        for (auto pair : map) {
            result.push_back(pair.second);
        }

        return result;
    }
};
// @lc code=end

