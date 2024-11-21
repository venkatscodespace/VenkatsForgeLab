# Leetcode Problem #1662: [Check If Two String Arrays are Equivalent](https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/)

- **Difficulty:** `Easy`

- **Language:** `Python3` 

- **Companies:**  Amazon, Apple, Facebook

- **Topics:** [Array](https://leetcode.com/tag/array/), [String](https://leetcode.com/tag/string/)

- **Description:** Given two string arrays `word1` and `word2`, return `true` *if the two arrays **represent** the same string, and* `false` *otherwise.* A string is **represented** by an array if the array elements concatenated **in order** forms the string.

- **Testcase 1:**
  
  - **Input:** word1 = ["ab", "c"], word2 = ["a", "bc"]
    **Output:** true
    **Explanation:**
    word1 represents string "ab" + "c" -> "abc"
    word2 represents string "a" + "bc" -> "abc"
    The strings are the same, so return true.

- **Testcase 2:** 
  
  - **Input:** word1 = ["a", "cb"], word2 = ["ab", "c"]
    **Output:** false

- **Testcase 3:** 
  
  - **Input:** word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
    **Output:** true

- **Constraint 1**: `1 <= word1.length, word2.length <= 10**3` 

- **Constraint 2**: `1 <= word1[i].length, word2[i].length <= 103` 

- **Constraint 3**: `1 <= sum(word1[i].length), sum(word2[i].length) <= 103`

- **Constraint 4**: `word1[i]` and `word2[i]` consist of lowercase letters.

- **Acceptance Rate:** 85.6%

- **Source Code:**
  
  ```python
  class Solution:
      def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
          s1,s2="",""
          for i in word1:
              s1+=i
          for i in word2:
              s2+=i
          return s1==s2
  ```

- **Runtime**: 34 *ms* and  76.53%

- **Memory:** 16.45 MB and 88.18%
