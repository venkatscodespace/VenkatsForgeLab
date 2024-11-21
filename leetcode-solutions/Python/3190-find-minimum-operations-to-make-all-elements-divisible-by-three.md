# [3190. Find Minimum Operations to Make All Elements Divisible by Three](https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/)

- **Difficulty:** `Easy`

- **Language:** `Python3`

- **Companies:** Amazon, Microsoft

- **Topics:** [Array](https://leetcode.com/tag/array/), [Math](https://leetcode.com/tag/math/)

- **Acceptance Rate:** **89.9%**

- **Description:** You are given an integer array `nums`. In one operation, you can add or subtract 1 from **any** element of `nums`. Return the **minimum** number of operations to make all elements of `nums` divisible by 3.

- **Testcase 1:**
  
  - **Input:** nums = [1,2,3,4]**Output:** 3**Explanation:** All array elements can be made divisible by 3 using 3 operations:
    - Subtract 1 from 1.
    - Add 1 to 2.
    - Subtract 1 from 4.

- **Testcase 2**:
  
  - **Input:** nums = [3,6,9]**Output:** 0

- **Constraint 1:** ``1 <= nums.length <= 50`

- **Constraint 2:** `1 <= nums[i] <= 50`

- **Source Code:**
  
  ```python
  class Solution:
      def minimumOperations(self, nums: List[int]) -> int:
          return len([i for i in nums if i%3!=0])
  ```

- **Runtime**: 33 *ms* and 93.25%

- **Memory:** 16.63 MB and 7.39%
