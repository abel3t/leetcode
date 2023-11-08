/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int maxLength = 0;
        int l = 0;
        unordered_set<char> charSet;

        for (char c : s)
        {
            while (charSet.count(c) > 0)
            {
                charSet.erase(s[l]);
                l += 1;
            }

            charSet.insert(c);

            maxLength = max(maxLength, (int)charSet.size());
        }

        return maxLength;
    }
};
// @lc code=end
