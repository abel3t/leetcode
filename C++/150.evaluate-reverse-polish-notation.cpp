/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        vector<int> stack = {};

        for (string token : tokens)
        {
            if (token != "+" & token != "-" && token != "*" && token != "/")
            {
                stack.push_back(stoi(token));

                continue;
            }

            int b = stack.back();

            stack.pop_back();

            int a = stack.back();

            stack.pop_back();

            if (token == "+")
            {
                stack.push_back(a + b);
            }

            if (token == "-")
            {
                stack.push_back(a - b);
            }

            if (token == "*")
            {
                stack.push_back(a * b);
            }

            if (token == "/")
            {
                stack.push_back(a / b);
            }
        }

        return stack.back();
    }
};
// @lc code=end
