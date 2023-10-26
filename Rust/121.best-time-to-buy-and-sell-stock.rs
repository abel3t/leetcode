/*
 * @lc app=leetcode id=121 lang=rust
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut min_buy_price = i32::MAX;
        let mut max_profit = 0;

        for i in 0..prices.len() - 1 {
            min_buy_price = i32::min(min_buy_price, prices[i]);

            if prices[i + 1] - min_buy_price > max_profit {
                max_profit = prices[i + 1] - min_buy_price;
            }
        }

        max_profit
    }
}
// @lc code=end
