/*
 * @lc app=leetcode id=49 lang=csharp
 *
 * [49] Group Anagrams
 */

// @lc code=start
public class Solution
{
    public IList<IList<string>> GroupAnagrams(string[] strs)
    {
        Dictionary<string, List<string>> map = new Dictionary<string, List<string>>();

        foreach (string str in strs)
        {
            string key = string.Join("", str.OrderBy(c => c));
            if (!map.ContainsKey(key))
            {
                map[key] = new List<string>();
            }

            map[key].Add(str);
        }

        return map.Values.ToList<IList<string>>();
    }
}
// @lc code=end

