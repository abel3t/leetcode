/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> stack = {};

        unordered_map<char, char> map{
            {'(', ')'},
            {'[', ']'},
            {'{', '}'},
        };

        for (char x : s)
        {
            if (x == '{' || x == '[' || x == '(')
            {
                stack.push_back(x);
                continue;
            }

            if (stack.empty())
            {
                return false;
            }

            if (x != map[stack.back()])
            {
                return false;
            }

            stack.pop_back();
        }

        return stack.empty();
    }
};
// @lc code=end
