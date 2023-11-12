/*
 * @lc app=leetcode id=242 lang=rust
 *
 * [242] Valid Anagram
 */

// @lc code=start
impl Solution {
    pub fn is_anagram(s: String, t  : String) -> bool {
        let mut count = [0; 26];

        for c in s.chars() {
            count[(c as usize) - ('a' as usize)] += 1;
        }

        for c in t.chars() {
            count[(c as usize) - ('a' as usize)] -= 1;
        }

        for &c in count.iter() {
            if c != 0 {
                return false;
            }
        }

        true
    }
}
// @lc code=end
