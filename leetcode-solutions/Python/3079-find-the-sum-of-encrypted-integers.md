# [3079. Find the Sum of Encrypted Integers](https://leetcode.com/problems/find-the-sum-of-encrypted-integers/)

- **Difficulty:** `Easy`

- **Language:** `Python3`  

- **Companies:** Unknown 

- **Topics:** [Array](https://leetcode.com/tag/array/), [Math](https://leetcode.com/tag/math/) 

- **Description:** You are given an integer array `nums` containing **positive** integers. We define a function `encrypt` such that `encrypt(x)` replaces **every** digit in `x` with the **largest** digit in `x`. For example, `encrypt(523) = 555` and `encrypt(213) = 333`. Return *the **sum** of encrypted elements*. 

- **Testcase 1:**
  
  - **Input:** nums = [1,2,3]
    
    **Output:** 6
    
    **Explanation:** The encrypted elements are `[1,2,3]`. The sum of encrypted elements is `1 + 2 + 3 == 6`.

- **Testcase 2:**
  
  - **Input:** nums = [10,21,31]
    
    **Output:** 66
    
    **Explanation:** The encrypted elements are `[11,22,33]`. The sum of encrypted elements is `11 + 22 + 33 == 66`.

- **Constraint 1:** `1 <= nums.length <= 50`

- **Constraint 2:** `1 <= nums[i] <= 1000`

- **Acceptance Rate:** **74.5%**

- **Source Code:**
  
  ```python
  def encrypt(x):
      s=list(str(x))
      t=max(s)*len(s)
      return int(t)
  class Solution:
      def sumOfEncryptedInt(self, nums: List[int]) -> int:
          return sum([encrypt(x) for x in nums])
          
  ```

- **Runtime**: 42 ms and 97.10%

- **Memory:** 16.52 MB and 32.59%
