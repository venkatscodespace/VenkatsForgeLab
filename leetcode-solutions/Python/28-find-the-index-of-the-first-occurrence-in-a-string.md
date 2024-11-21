# Leetcode Problem #28: [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

- **Difficulty:** `Easy`
  
- **Language:** `Python3`
  
- **Companies:** Amazon, Warner Media, Google, Facebook, Apple, Bloomberg, Microsoft, pocketgems
  
- **Topics:** `Two Pointers` , `String`, `String Matching`
  
- **Description:** Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.
  
- **Example Testcases:**
  
  - **Example 1:**
    
    - **Input:** haystack = "sadbutsad", needle = "sad"
      
    - **Output:** 0
      
    - **Explanation:** "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0.
      
  - **Example 2:**
    
    - **Input:** haystack = "leetcode", needle = "leeto"
      
    - **Output:** -1
      
    - **Explanation:** "leeto" did not occur in "leetcode", so we return -1.
      
- **Constraints:**
  
  - `1 <= haystack.length, needle.length <= 104`
    
  - `haystack` and `needle` consist of only lowercase English characters.
    
- **Acceptance Rate:** **43.2%**
  
- **Source Code:**
  
  ```python3
  class Solution:
      def strStr(self, haystack: str, needle: str) -> int:
          if needle.lower() in haystack.lower():
              return haystack.index(needle)
          else:
              return -1
  ```
  
- **Runtime**: 35ms and 55.53%
  
- **Memory:** 16.38 MB and 93.44%
