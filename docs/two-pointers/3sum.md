---
description: https://leetcode.com/problems/3sum/
---

# 3Sum

### <mark style="color:green;">Intuition</mark>

* Use two pointers to find all unique triplets that sum to zero.

### <mark style="color:green;">Approach</mark>

* Sort the input array `nums`.
* Loop through `nums`:
  * Set pointer i at current index.
  * Set pointers j and k at i+1 and end of array.
  * While j < k:
    * Calculate sum of nums\[i] + `nums[j] + nums[k]`.
    * If sum is 0, add triplet to result set.
    * Increment j if `sum < 0`, decrement k if `sum > 0`.
* Return result set as vector.

### <mark style="color:green;">Complexity</mark>

* **Time:** `O(N^2)` to loop through array and use two pointers.
* **Space:** `O(N)` to store result.
* **Key Points**
  * Sort array to easily control sum.
  * Fix one pointer, use two pointers to find pair.
  * Use set to handle duplicates efficiently.
  * Overall quadratic time complexity.
  * Linear space to store triplets.

````cpp
```cpp
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result = {};

        sort(nums.begin(), nums.end());

        set<vector<int>> set;

        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0)
                {
                    set.insert({nums[i], nums[j], nums[k]});
                    ++j;
                    --k;
                }

                if (sum < 0)
                {
                    ++j;
                }

                if (sum > 0)
                {
                    --k;
                }
            }
        }

        for (auto it : set)
        {
            result.push_back(it);
        }

        return result;
    }
};
```
````

