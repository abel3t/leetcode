/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start

typedef struct
{
  int num;
  int idx;
  // Makes structure hashable
  UT_hash_handle hh;
} num_t;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
  num_t *numsHash = NULL, *num = NULL, *tmp = NULL;

  for (int i = 0; i < numsSize; ++i)
  {
    int toFind = target - nums[i];
    HASH_FIND_INT(numsHash, &toFind, num);

    if (num != NULL)
    {
      int *res = calloc((*returnSize = 2), sizeof(int));

      res[0] = num->idx;
      res[1] = i;

      return res;
    }

    num = malloc(sizeof(num_t));
    num->num = nums[i];
    num->idx = i;

    HASH_ADD_INT(numsHash, num, num);
  }

  HASH_ITER(hh, numsHash, num, tmp)
  {
    HASH_DEL(numsHash, num);
    free(num);
  }

  return 0;
}
// @lc code=end