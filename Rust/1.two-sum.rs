/*
 * @lc app=leetcode id=1 lang=rust
 *
 * [1] Two Sum
 */

// @lc code=start
impl Solution {
  pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    use std::collections::HashMap;

    let mut map = HashMap::new();

    for (i, n) in nums.iter().enumerate() {
      let diff = target - n;
      if let Some(&j) = map.get(&diff) {
        return vec![i as i32, j];
      }

      map.insert(*n, i as i32);
    }
    
    vec![]
  }
}
// @lc code=end

