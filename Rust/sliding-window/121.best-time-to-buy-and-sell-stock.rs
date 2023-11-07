/*
 * @lc app=leetcode id=121 lang=rust
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut max_p: i32 = 0;
        let mut l: i32 = 0;
        let mut r: i32 = 1;

        while r < prices.len() {
            if prices[l] < prices[r] {
                max_p = max_p.max(prices[r] - prices[l]);
            } else {
                l = r;
            }

            r += 1;
        }

        return max_p;
    }
}
// @lc code=end
