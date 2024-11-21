# [1051. Height Checker](https://leetcode.com/problems/height-checker/)

- **Difficulty:** `Easy`

- **Language:** `Python3`  

- **Companies:** Amazon, Google, Microsoft, and Apple 

- **Topics:** [Array](https://leetcode.com/tag/array/), [Sorting](https://leetcode.com/tag/sorting/), [Counting Sort](https://leetcode.com/tag/counting-sort/)

- **Description:** A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in **non-decreasing order** by height. Let this ordering be represented by the integer array `expected` where `expected[i]` is the expected height of the `ith` student in line.
  
  You are given an integer array `heights` representing the **current order** that the students are standing in. Each `heights[i]` is the height of the `ith` student in line (**0-indexed**).
  
  Return *the **number of indices** where* `heights[i] != expected[i]`.

- **Acceptance Rate:** 80.8%

- **Testcase 1:**
  
  - **Input:** heights = [1,1,4,2,1,3]
  
  - **Output:** 3
  
  - **Explanation:** 
    heights:  [1,1,<u>4</u>,2,<u>1</u>,<u>3</u>]
    expected: [1,1,<u>1</u>,2,<u>3</u>,<u>4</u>]
    Indices 2, 4, and 5 do not match.

- **Testcase 2:**
  
  - **Input:** heights = [5,1,2,3,4]
  
  - **Output:** 5
  
  - **Explanation:**
    heights:  [<u>5</u>,<u>1</u>,<u>2</u>,<u>3</u>,<u>4</u>]
    expected: [<u>1</u>,<u>2</u>,<u>3</u>,<u>4</u>,<u>5</u>]
    All indices do not match.

- **Testcase 3:** 
  
  - **Input:** heights = [1,2,3,4,5]
  
  - **Output:** 0
  
  - **Explanation:**
    heights:  [1,2,3,4,5]
    expected: [1,2,3,4,5]
    All indices match.

- **Constraint 1:** `1 <= heights.length <= 100`

- **Constraint 2:** `1 <= heights[i] <= 100`

- **Hint 1:** Build the correct order of heights by sorting another array, then compare the two arrays.

- **Source Code:**
  
  ```python
  class Solution:
      def heightChecker(self, heights: List[int]) -> int:
          c,heights2=0,heights.copy()
          heights2.sort()
          for i in range(len(heights)):
              if heights[i]!=heights2[i]:
                  c+=1
          return c
  ```
  
  - **Runtime**: 44 ms and 25.44%

- **Memory:** 16.52 MB and 19.88%
