# [2418. Sort the People](https://leetcode.com/problems/sort-the-people/)

- **Difficulty:** `Easy`

- **Language:** `Python3`  

- **Companies:** Amazon, Google, Microsoft, and Apple 

- **Topics:** [Array](https://leetcode.com/tag/array/), [Hash Table](https://leetcode.com/tag/hash-table/), [String](https://leetcode.com/tag/string/) , [Sorting](https://leetcode.com/tag/sorting/) 

- **Description:** You are given an array of strings `names`, and an array `heights` that consists of **distinct** positive integers. Both arrays are of length `n`. For each index `i`, `names[i]` and `heights[i]` denote the name and height of the `ith` person. Return `names` *sorted in **descending** order by the people's heights*.

- **Acceptance Rate:** 85.0%

- **Testcase 1:**
  
  - **Input:** names = ["Mary","John","Emma"], heights = [180,165,170]
  
  - **Output:** ["Mary","Emma","John"]
  
  - **Explanation:** Mary is the tallest, followed by Emma and John.

- **Testcase 2:**
  
  - **Input:** names = ["Alice","Bob","Bob"], heights = [155,185,150]
  
  - **Output:** ["Bob","Alice","Bob"]
  
  - **Explanation:** The first Bob is the tallest, followed by Alice and the second Bob.

- **Constraint 1:** `n == names.length == heights.length`

- **Constraint 2:** `1 <= n <= 103`

- **Constraint 3:** `1 <= names[i].length <= 20`

- **Constraint 4:** `1 <= heights[i] <= 105`

- **Constraint 5:** `names[i]` consists of lower and upper case English letters.

- **Constraint 6:** All the values of `heights` are distinct.

- **Hint 1:** Find the tallest person and swap with the first person, then find the second tallest person and swap with the second person, etc. Repeat until you fix all n people.

- **Source Code:**
  
  ```python
  class Solution:
      def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
          d={heights[i]:names[i] for i in range(len(names))}
          l=[]
          x=list(d.keys())
          x.sort()
          for i in x:
              l.append(d[i])
          return l[::-1]
          
  ```

- **Runtime**: 107 ms and 43.73%

- **Memory:** 17.04 MB and 64.39% 👏
