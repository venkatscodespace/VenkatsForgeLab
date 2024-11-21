# [2455. Average Value of Even Numbers That Are Divisible by Three](https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/)

- **Difficulty:**  `Easy`

- **Language:** `Python3`  

- **Companies:** Google, Microsoft, Amazon, and Facebook (Meta) 

- **Topics:** [Array](https://leetcode.com/tag/array/), [Math](https://leetcode.com/tag/math/) 

- **Description:** Given an integer array `nums` of **positive** integers, return *the average value of all even integers that are divisible by* `3`*.*
  
  Note that the **average** of `n` elements is the **sum** of the `n` elements divided by `n` and **rounded down** to the nearest integer.

- **Testcase 1:**
  
  - **Input:** nums = [1,3,6,10,12,15]
    **Output:** 9
    **Explanation:** 6 and 12 are even numbers that are divisible by 3. (6 + 12) / 2 = 9.

- **Testcase 2:** 
  
  - **Input:** nums = [1,2,4,7,10]
    **Output:** 0
    **Explanation:** There is no single number that satisfies the requirement, so return 0.

- **Constraint 1:** `1 <= nums.length <= 1000`

- **Constraint 2:** `1 <= nums[i] <= 1000`

- **Acceptance Rate:** 60.7%

- **Source Code:**
  
  ```python
  class Solution:
      def averageValue(self, nums: List[int]) -> int:
          L=[i for i in nums if (i%3==0) and (i%2==0)]
          if len(L)==0:
              return 0
          else:
              return int(sum(L)/len(L))
  ```

-  **Runtime**: 67 ms and 80.71%

- **Memory:**  16.65MB and 81.22%
