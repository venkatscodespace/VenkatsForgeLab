# [2652. Sum Multiples](https://leetcode.com/problems/sum-multiples/)

- **Difficulty:** `Easy`

- **Language:** `Python3`  

- **Companies:** Amazon, Google, Microsoft, and Apple 

- **Topics:** [Math](https://leetcode.com/tag/math/)

- **Description:** Given a positive integer `n`, find the sum of all integers in the range `[1, n]` **inclusive** that are divisible by `3`, `5`, or `7`. Return *an integer denoting the sum of all numbers in the given range satisfying the constraint.*

- **Acceptance Rate:** 85.7%

- **Testcase 1:** 
  
  - **Input:** n = 7
  
  - **Output:** 21
  
  - **Explanation:** Numbers in the range `[1, 7]` that are divisible by `3`, `5,` or `7` are `3, 5, 6, 7`. The sum of these numbers is `21`.

- **Testcase 2:**
  
  - **Input:** n = 10
  
  - **Output:** 40
  
  - **Explanation:** Numbers in the range `[1, 10] that are` divisible by `3`, `5,` or `7` are `3, 5, 6, 7, 9, 10`. The sum of these numbers is 40.

- **Testcase 3:**
  
  - **Input:** n = 9
  
  - **Output:** 30
  
  - **Explanation:** Numbers in the range `[1, 9]` that are divisible by `3`, `5`, or `7` are `3, 5, 6, 7, 9`. The sum of these numbers is `30`.

- **Constraint 1:** `1 <= n <= 103`

- **Hint 1:** Iterate through the range 1 to n and count numbers divisible by either 3, 5, or 7.

- **Source Code:**
  
  ```python
  class Solution:
      def sumOfMultiples(self, n: int) -> int:
          return sum([i for i in range(1,n+1) if (i%3==0) or (i%5==0) or(i%7==0)])
  ```

- **Runtime**: 65 ms and 40.65%

- **Memory:** 16.58 MB and 43.57%

- **Similiar Questions:** **NONE**
