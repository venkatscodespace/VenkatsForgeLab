# [2529. Maximum Count of Positive Integer and Negative Integer](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/)

- **Difficulty:** `Easy` 

- **Language:** `Python3`  

- **Companies:** Amazon  

- **Topics:** [Array](https://leetcode.com/tag/array/), [Binary Search](https://leetcode.com/tag/binary-search/), [Counting](https://leetcode.com/tag/counting/) 

- **Description:** Given an array `nums` sorted in **non-decreasing** order, return *the maximum between the number of positive integers and the number of negative integers.* In other words, if the number of positive integers in `nums` is `pos` and the number of negative integers is `neg`, then return the maximum of `pos` and `neg`.
  
  > **Note** that `0` is neither positive nor negative. 

- **Testcase 1:** 
  
  - **Input:** nums = [-2,-1,-1,1,2,3]
    **Output:** 3
    **Explanation:** There are 3 positive integers and 3 negative integers. The maximum count among them is 3.

- **Testcase 2:**
  
  - **Input:** nums = [-3,-2,-1,0,0,1,2]
    **Output:** 3
    **Explanation:** There are 2 positive integers and 3 negative integers. The maximum count among them is 3.

- **Testcase 3:**
  
  - **Input:** nums = [5,20,66,1314]
    **Output:** 4
    **Explanation:** There are 4 positive integers and 0 negative integers. The maximum count among them is 4.

- **Constraint 1:** `1 <= nums.length <= 2000`

- **Constraint 2:** `-2000 <= nums[i] <= 2000`

- **Constraint 3:** `nums` is sorted in a **non-decreasing order**.

- **Acceptance Rate:** **71.0%**

- **Source Code:**
  
  ```python
  class Solution:
      def maximumCount(self, nums: List[int]) -> int:
          c1,c2=0,0
          for i in nums:
              if i > 0:
                  c1+=1
              elif i < 0:
                  c2+=1
          return max([c1,c2])
  ```

- **Runtime**: 107 ms and 45.35%

- **Memory:** 16.88 MB and 56.64%
