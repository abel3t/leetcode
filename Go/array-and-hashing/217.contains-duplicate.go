/*
 * @lc app=leetcode id=217 lang=golang
 *
 * [217] Contains Duplicate
 */

// @lc code=start
func containsDuplicate(nums []int) bool {
	numMap := make(map[int]bool)

	for _, num := range nums {
		if _, exist := numMap[num]; exist {
			return true
		}

		numMap[num] = true
	}

	return false
}

// @lc code=end
