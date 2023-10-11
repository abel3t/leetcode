/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution
{
public:
    int64_t calculateEatingHours(vector<int> &piles, int speed)
    {
        int64_t hours = 0;
        for (auto pile : piles)
        {
            hours += ceil((double)pile / (double)speed);
        }

        return hours;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int minSpeed = right;

        while (left <= right)
        {
            int speed = left + (right - left) / 2;

            int64_t hours = calculateEatingHours(piles, speed);

            if (hours <= h)
            {
                minSpeed = min(minSpeed, speed);
                right = speed - 1;
            }
            else
            {
                left = speed + 1;
            }
        }

        return minSpeed;
    }
};
// @lc code=end
