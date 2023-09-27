/*
 * @lc app=leetcode id=217 lang=csharp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
public class Solution
{
    public bool ContainsDuplicate(int[] nums)
    {
        Dictionary<int, bool> map = new Dictionary<int, bool>();

        foreach (int num in nums)
        {
            if (map.ContainsKey(num))
            {
                return true;
            }

            map[num] = true;
        }

        return false;
    }

    public bool ContainsDuplicateV2(int[] nums)
    {
        Array.Sort(nums);

        for (int i = 0; i < nums.Length - 1; i++)
        {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
}
// @lc code=end

