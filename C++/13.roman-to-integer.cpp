/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> RomanToIntMap =
            {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}};

        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int currentValue = RomanToIntMap[s[i]];
            int nextValue = RomanToIntMap[s[i + 1]];
            if (currentValue < nextValue)
            {
                sum -= currentValue;
            }
            else
            {
                sum += currentValue;
            }
        }

        return sum;
    }
};
// @lc code=end
