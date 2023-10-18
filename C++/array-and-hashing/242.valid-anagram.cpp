#include <string>

using namespace std;

/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int count[26] = {0};

        for (char c : s)
        {
            count[c - 'a']++;
        }

        for (char c : t)
        {
            count[c - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end
