/*
 * @lc app=leetcode id=217 lang=c
 *
 * [217] Contains Duplicate
 */

// @lc code=start
typedef struct
{
  int num;
  bool exists;

  // Makes structure hashable
  UT_hash_handle hh;
} NumMap;

bool containsDuplicate(int *nums, int numsSize)
{
  NumMap *numsHash = NULL, *num = NULL, *tmp = NULL;

  for (int i = 0; i < numsSize; ++i)
  {
    int current = nums[i];

    HASH_FIND_INT(numsHash, &current, num);

    if (num != NULL)
    {
      return true;
    }

    num = malloc(sizeof(NumMap));
    num->num = current;
    num->exists = true;

    HASH_ADD_INT(numsHash, num, num);
  }

  HASH_ITER(hh, numsHash, num, tmp)
  {
    HASH_DEL(numsHash, num);
    free(num);
  }

  return false;
}
// @lc code=end
