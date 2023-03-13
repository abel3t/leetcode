/*
 * @lc app=leetcode id=1 lang=rust
 *
 * [1] Two Sum
 */

// @lc code=start
impl Solution {
  pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    use std::collections::HashMap;

    let mut m: HashMap<i32, i32> = HashMap::new();

    for (i, num) in nums.iter().enumerate(){
      match m.get(&(target - *num)) {
        Some(&i2) => return vec![i as i32, i2],
        None => m.insert(*num, i as i32),
      };
    }
    vec![]
  }
}
// @lc code=end

