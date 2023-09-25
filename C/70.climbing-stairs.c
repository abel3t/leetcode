/*
 * @lc app=leetcode id=70 lang=c
 *
 * [70] Climbing Stairs
 */

// @lc code=start
int climbStairs(int n)
{
  if (n <= 3)
  {
    return n;
  }

  int prev1 = 2, prev2 = 1;
  for (int i = 3; i <= n; i++)
  {
    int temp = prev1 + prev2;
    prev2 = prev1;
    prev1 = temp;
  }

  return prev1;
}
// @lc code=end
