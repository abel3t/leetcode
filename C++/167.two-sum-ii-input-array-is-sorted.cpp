#include <vector>

using namespace std;


/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return { left + 1, right + 1 };
            }

            if (sum < target) {
                left++;
            }

            if (sum > target) {
                right--;
            }
        }

        return {};
    }
};
// @lc code=end

