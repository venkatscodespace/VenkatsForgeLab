# Leetcode Problem #1351:[Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/)

- **Difficulty:**  `Easy`

- **Language:** `Python3` 

- **Companies:** Amazon

- **Topics:** [Array](https://leetcode.com/tag/array/),[Binary Search](https://leetcode.com/tag/binary-search/) ,[Matrix](https://leetcode.com/tag/matrix/) 

- **Description:** Given a `m x n` matrix `grid` which is sorted in non-increasing order both row-wise and column-wise, return *the number of **negative** numbers in* `grid`.

- **Testcase 1:**
  
  - **Input:** grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
    **Output:** 8
    **Explanation:** There are 8 negatives number in the matrix.

- **Testcase 2:**
  
  - **Input:** grid = [[3,2],[1,0]]
    **Output:** 0

- **Constraint 1**:  `m == grid.length`

- **Constraint 2**:  `n == grid[i].length`

- **Constraint 3**: `1 <= m, n <= 100`

- **Constraint 4**: `-100 <= grid[i][j] <= 100`

- **Acceptance Rate:** **77.4%**

- **Source Code:**
  
  ```python
  class Solution:
      def countNegatives(self, grid: List[List[int]]) -> int:
          c=0
          l=[]
          for i in grid:
              l.extend(i)
          for i in l:
              if i < 0:
                  c+=1
          return c
          
  ```

- **Runtime**: 98 *ms* and *82.99%*

- **Memory:** *17.80MB* and *20.03%*
