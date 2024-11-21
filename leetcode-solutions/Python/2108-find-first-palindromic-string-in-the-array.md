# [2108. Find First Palindromic String in the Array](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/)

- **Difficulty:** `Easy`

- **Language:**  `Python3`

- **Companies:** Facebook

- **Topics:** [Array](https://leetcode.com/tag/array/), [Two Pointers](https://leetcode.com/tag/two-pointers/), [String](https://leetcode.com/tag/string/)

- **Description:** Given an array of strings `words`, return *the first **palindromic** string in the array*. If there is no such string, return an *empty string*`""`. A string is **palindromic** if it reads the same forward and backward.

- **Testcase 1:** 
  
  - **Input:** words = ["abc","car","ada","racecar","cool"]
    **Output:** "ada"
    **Explanation:** The first string that is palindromic is "ada".
    Note that "racecar" is also palindromic, but it is not the first.

- **Testcase 2:**
  
  - **Input:** words = ["notapalindrome","racecar"]
    **Output:** "racecar"
    **Explanation:** The first and only string that is palindromic is "racecar".

- **Testcase 3:**
  
  - **Input:** words = ["def","ghi"]
    **Output:** ""
    **Explanation:** There are no palindromic strings, so the empty string is returned.

- **Constraint 1:** `1 <= words.length <= 100`

- **Constraint 2:**  `1 <= words[i].length <= 100`

- **Constraint 3:** `words[i]` consists only of lowercase English letters.

- **Acceptance Rate:** **83.9%**

- **Source Code:**
  
  ```python
  class Solution:
      def firstPalindrome(self, words: List[str]) -> str:
          for i in words:
              if i==i[::-1]:
                  return i
                  break
          else:
              return "" 
  ```

- **Runtime**: 75 *ms* and 64.70%

- **Memory:** 16.61MB and 47.69%
