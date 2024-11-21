# [2000. Reverse Prefix of Word](https://leetcode.com/problems/reverse-prefix-of-word/)

- **Difficulty:** `Easy`

- **Language:**  `Python3`

- **Companies:** Optum
  
  > **Note:** Optum, Inc. is an American healthcare company that provides technology services, pharmacy care services and various direct healthcare services.

- **Topics:** [Two Pointers](https://leetcode.com/tag/two-pointers/), [String](https://leetcode.com/tag/string/)

- **Description:** Given a **0-indexed** string `word` and a character `ch`, **reverse** the segment of `word` that starts at index `0` and ends at the index of the **first occurrence** of `ch` (**inclusive**). If the character `ch` does not exist in `word`, do nothing.For example, if `word = "abcdefd"` and `ch = "d"`, then you should **reverse** the segment that starts at `0` and ends at `3` (**inclusive**). The resulting string will be `"<u>dcba</u>efd"`.
  
  Return *the resulting string*.

- **Testcase 1:** 
  
  - **Input:** word = "<u>abcd</u>efd", ch = "d"
    **Output:** "<u>dcba</u>efd"
    **Explanation:** The first occurrence of "d" is at index 3. 
    Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd". 

- **Testcase 2:**
  
  - **Input:** word = "<u>xyxz</u>xe", ch = "z"
    **Output:** "<u>zxyx</u>xe"
    **Explanation:** The first and only occurrence of "z" is at index 3.
    Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".

- **Testcase 3:**
  
  - **Input:** word = "abcd", ch = "z"
    **Output:** "abcd"
    **Explanation:** "z" does not exist in word.
    You should not do any reverse operation, the resulting string is "abcd".

- **Constraint 1:** `1 <= word.length <= 250`

- **Constraint 2:**  `word` consists of lowercase English letters.

- **Constraint 3:** `ch` is a lowercase English letter.

- **Acceptance Rate:** **86.3%**

- **Source Code:**
  
  ```python
  class Solution:
      def reversePrefix(self, word: str, ch: str) -> str:
          s=word[0:word.find(ch)+1]
          return word.replace(s,s[::-1])
          
  ```

- **Runtime**: 30 *ms* and 85.72%

- **Memory:** 16.56MB and 24.36%
