/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start
int RomanToIntMap(char roman)
{
  switch (roman)
  {
  case 'I':
    return 1;

  case 'V':
    return 5;

  case 'X':
    return 10;

  case 'L':
    return 50;

  case 'C':
    return 100;

  case 'D':
    return 500;

  case 'M':
    return 1000;

  default:
    return -1;
  }
}

int romanToInt(char *s)
{
  int sum = 0;

  for (int i = 0; i < strlen(s); i++)
  {
    const currentValue = RomanToIntMap(s[i]);
    const nextValue = RomanToIntMap(s[i + 1]);

    if (currentValue < nextValue)
    {
      sum -= currentValue;
    }
    else
    {
      sum += currentValue;
    }
  }

  return sum;
}
// @lc code=end
