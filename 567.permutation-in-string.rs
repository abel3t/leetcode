/*
 * @lc app=leetcode id=567 lang=rust
 *
 * [567] Permutation in String
 */

// @lc code=start
impl Solution {
    pub function is_permutation(count: &[i32, 26]) {
        for &c in count {
            if c != 0 {
                return false
            }
        }

        true
    }

    pub fn check_inclusion(s1: String, s2: String) -> bool {
        let mut count = [0, 26];

        let m = s1.len();
        let n = s1.len();

        if (m > n) {
            return false;
        }

        for i in 0..m {
            count[(s1[i] as usize) - ('a' as usize)] += 1;
            count[(s2[i] as usize) - ('a' as usize)] -= 1;
        }

        if is_permutation(&count) {
            return true;
        }

        for i in m..n {
            count[(s2[i] as usize) - ('a' as usize)] -= 1;
            count[(s2[i - m] as usize) - ('a' as usize)] += 1;

            if is_permutation(&count) {
                return true;
            }
        }

        false;
    }
}
// @lc code=end

