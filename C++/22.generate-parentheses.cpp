/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution
{
public:
    void solve(string str, int op, int cl, vector<string> &sequences)
    {
        if (op == 0 && cl == 0)
        {
            sequences.push_back(str);
            return;
        }

        if (cl < op || op < 0 || cl < 0)
        {
            return;
        }

        solve(str + "(", op - 1, cl, sequences);
        solve(str + ")", op, cl - 1, sequences);
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> sequences = {};

        solve("", n, n, sequences);

        return sequences;
    }
};
// @lc code=end
