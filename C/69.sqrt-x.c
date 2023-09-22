/*
 * @lc app=leetcode id=69 lang=c
 *
 * [69] Sqrt(x)
 */

// @lc code=start
int mySqrt(int x)
{
  if (x == 0 || x == 1)
  {
    return x;
  }

  int start = 0, end = x, ans = 0;

  while (start < end)
  {
    int mid = start + (end - start) / 2;
    int root = x / mid;

    if (root >= mid)
    {
      start = mid + 1;
      ans = mid;
    } else {
      end = mid;
    }
  }

  return ans;
}
// @lc code=end
