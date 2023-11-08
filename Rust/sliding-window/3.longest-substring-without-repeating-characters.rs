/*
 * @lc app=leetcode id=3 lang=rust
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
use std::collections::VecDeque;

impl Solution {
    pub fn length_of_longest_substring(s: String) -> i32 {
        let mut set: VecDeque<char> = VecDeque::new();
        let mut longest = 0;

        for c in s.chars() {
            while set.contains(&c) {
                set.pop_front();
            }

            set.push_back(c);

            longest = longest.max(set.len());
        }

        return longest as i32;
    }
}
// @lc code=end
