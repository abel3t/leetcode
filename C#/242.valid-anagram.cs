/*
 * @lc app=leetcode id=242 lang=csharp
 *
 * [242] Valid Anagram
 */

// @lc code=start
public class Solution {
    public bool IsAnagram(string s, string t) {
        int[] count = new int[26];

        foreach (char c in s)
        {
            count[c - 'a']++;
        }

        foreach (char c in t)
        {
            count[c - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
}
// @lc code=end

