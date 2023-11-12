/*
 * @lc app=leetcode id=3 lang=golang
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
func lengthOfLongestSubstring(s string) int {
	charSet := make(map[byte]bool)
	l := 0
	maxLength := 0

	for r, _ := range s {
		for charSet[s[r]] {
			delete(charSet, s[l])
			l++
		}

		charSet[s[r]] = true

		if r-l+1 > maxLength {
			maxLength = r - l + 1
		}
	}

	return maxLength
}

// @lc code=end

