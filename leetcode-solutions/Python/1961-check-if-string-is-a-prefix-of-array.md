# [1961. Check If String Is a Prefix of Array](https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/)

- **Difficulty:** `Easy`

- **Language:** `Python3`  

- **Companies:**  Samsung

- **Topics:** [Array](https://leetcode.com/tag/array/), [Two Pointers](https://leetcode.com/tag/two-pointers/), [String](https://leetcode.com/tag/string/)

- **Description:** Given a string `s` and an array of strings `words`, determine whether `s` is a **prefix string** of `words`.
  
  A string `s` is a **prefix string** of `words` if `s` can be made by concatenating the first `k` strings in `words` for some **positive** `k` no larger than `words.length`.
  
  Return `true` *if* `s` *is a **prefix string** of* `words`*, or* `false` *otherwise*.

- **Acceptance Rate:** 52.8%

- **Testcase 1:**
  
  - **Input:** s = "iloveleetcode", words = ["i","love","leetcode","apples"]
  
  - **Output:** true
  
  - **Explanation:** s can be made by concatenating "i", "love", and "leetcode" together.

- **Testcase 2:**
  
  - **Input:** s = "iloveleetcode", words = ["apples","i","love","leetcode"]
  
  - **Output:** false
  
  - **Explanation:**
    It is impossible to make s using a prefix of arr.

- **Constraint 1:** `1 <= words.length <= 100`

- **Constraint 2:** `1 <= words[i].length <= 20`

- **Constraint 3:** `1 <= s.length <= 1000`

- **Constraint 4:** `words[i]` and `s` consist of only lowercase English letters.

- **Hint 1:** There are only words.length prefix strings.

- **Hint 2:** Create all of them and see if s is one of them.

- **Source Code:**
  
  ```python
  class Solution:
      def isPrefixString(self, s: str, words: List[str]) -> bool:
          s1=""
          for i in words:
              s1+=i
              if s1==s:
                  return True
                  break
          else:
              return False
  ```

- **Runtime**: 39 ms and 57.28% 👏

- **Memory:** 16.67 MB and 8.33%
