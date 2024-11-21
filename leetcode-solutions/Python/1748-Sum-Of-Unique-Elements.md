# Leetcode Problem #1748 : [Sum Of Unique Elements](https://leetcode.com/problems/sum-of-unique-elements)

- **Difficulty:** `Easy` 

- **Language:** `Python` 

- **Companies:** Unknown

- **Topics:** [Array](https://leetcode.com/tag/array/),[Hash Table](https://leetcode.com/tag/hash-table/),[Counting](https://leetcode.com/tag/counting/)

- **Description:** You are given an integer array `nums`. The unique elements of an array are the elements that appear **exactly once** in the array.
  
  Return *the **sum** of all the unique elements of* `nums`.

- **Testcase 1:**
  
  - **Input:** nums = [1,2,3,2]
    **Output:** 4
    **Explanation:** The unique elements are [1,3], and the sum is 4.

- **Testcase 2:**
  
  - **Input:** nums = [1,1,1,1,1]
    **Output:** 0
    **Explanation:** There are no unique elements, and the sum is 0.

- **Testcase 3:**
  
  - **Input:** nums = [1,2,3,4,5]
    **Output:** 15
    **Explanation:** The unique elements are [1,2,3,4,5], and the sum is 15.

- **Constraint 1:**  `1 <= nums.length <= 100`

- **Constraint 2:** `1 <= nums[i] <= 100`

- **Acceptance Rate:** **78.1%**

- **Source Code:**
  
  ```python
  class Solution:
      def sumOfUnique(self, nums: List[int]) -> int:
          return sum([i for i in nums if nums.count(i)==1])
  ```

- **Runtime**: 40 *ms* and  42.53%

- **Memory:** 16.49 MB and 67.34%
