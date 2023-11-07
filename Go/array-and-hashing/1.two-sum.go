/*
 * @lc app=leetcode id=1 lang=golang
 *
 * [1] Two Sum
 */

// @lc code=start
func twoSum(nums []int, target int) []int {
	numMap := make(map[int]int)

	for i, num := range nums {
		complement := target - num

		if j, exists := numMap[complement]; exists {
			return []int{j, i}
		}

		numMap[num] = i
	}

	return nil
}

// @lc code=end

