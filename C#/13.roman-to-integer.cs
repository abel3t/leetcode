/*
 * @lc app=leetcode id=13 lang=csharp
 *
 * [13] Roman to Integer
 */

// @lc code=start
public class Solution
{
    public int RomanToInt(string s)
    {
        Dictionary<char, int> RomanToIntMap = new Dictionary<char, int>
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < s.Length; i++)
        {
            int currentCurrentValue = RomanToIntMap[s[i]];
            int nextCurrentValue = (i + 1 < s.Length) ? RomanToIntMap[s[i + 1]] : 0;

            if (currentCurrentValue < nextCurrentValue)
            {
                sum -= currentCurrentValue;
            }
            else
            {
                sum += currentCurrentValue;
            }
        }

        return sum;
    }
}
// @lc code=end

