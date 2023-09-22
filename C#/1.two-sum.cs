/*
 * @lc app=leetcode id=1 lang=csharp
 *
 * [1] Two Sum
 */

// @lc code=start
public class Solution
{
    public int[] TwoSum(int[] nums, int target)
    {
        Dictionary<int, int> map = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++)
        {
            if (map.ContainsKey(target - nums[i]))
            {
                return new int[] { map[target - nums[i]], i };
            }
            else
            {
                map[nums[i]] = i;
            }
        }

        return new int[] { };
    }
}
// @lc code=end

