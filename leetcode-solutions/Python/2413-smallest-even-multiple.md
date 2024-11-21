# [2413. Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/)

- **Difficulty:** `Easy`
  
- **Language:** `Python3`
  
- **Companies:** NIL
  
- **Topics:** [Math](https://leetcode.com/tag/math/), [Number Theory](https://leetcode.com/tag/number-theory/)
  
- **Description:** Given a **positive** integer `n`, return the smallest positive integer that is a multiple of  both `2` and `n`.
  
- **Acceptance Rate:** 87.9%
  

- **Testcase 1:**
  
  - **Input:** n = 5
    
  - **Output:** 10
    
  - **Explanation:** The smallest multiple of both 5 and 2 is 10.
    
- **Testcase 2:**
  
  - **Input:** n = 6
    
  - **Output:** 6
    
  - **Explanation:** The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
    

- **Constraint 1:** `1 <= n <= 150`
  
- **Hint 1:** A guaranteed way to find a multiple of 2 and n is to multiply them together. When is this the answer, and when is there a smaller answer?
  
- **Hint 2:** There is a smaller answer when n is even.
  
- **Source Code:**
  
  ```python
  class Solution:
      def smallestEvenMultiple(self, n: int) -> int:
          if n%2==0:
              return n
          else:
              return n*2
  ```
  
- **Runtime**: 27 ms and 92.77% 👏
  
- **Memory:** 16.60 MB and 30.37%
