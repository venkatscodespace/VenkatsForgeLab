# [1816. Truncate Sentence](https://leetcode.com/problems/truncate-sentence/)

- **Difficulty:** `Easy`

- **Language:**  `Python3`

- **Companies:** Unknown

- **Topics:** [Array](https://leetcode.com/tag/array/), [String](https://leetcode.com/tag/string/)

- **Acceptance Rate:** **83.9%**
  
  

- **Description:** A **sentence** is a list of words that are separated by a single space with no leading or trailing spaces. Each of the words consists of **only** uppercase and lowercase English letters (no punctuation). For example, `"Hello World"`, `"HELLO"`, and `"hello world hello world"` are all sentences. You are given a sentence `s`​​​​​​ and an integer `k`​​​​​​. You want to **truncate** `s`​​​​​​ such that it contains only the **first** `k`​​​​​​ words. Return `s`​​​​*​​ after **truncating** it.*
  
  

- **Testcase 1:** 
  
  - **Input:** s = "Hello how are you Contestant", k = 4
    **Output:** "Hello how are you"
    **Explanation:**
    The words in s are ["Hello", "how" "are", "you", "Contestant"].
    The first 4 words are ["Hello", "how", "are", "you"].
    Hence, you should return "Hello how are you".

- **Testcase 2**:
  
  - **Input:** s = "What is the solution to this problem", k = 4
    **Output:** "What is the solution"
    **Explanation:**
    The words in s are ["What", "is" "the", "solution", "to", "this", "problem"].
    The first 4 words are ["What", "is", "the", "solution"].
    Hence, you should return "What is the solution".
    
    

- **Constraint 1:** `1 <= s.length <= 500`

- **Constraint 2:**  `k` is in the range `[1, the number of words in s]`.

- **Constraint 3:** ``s` consist of only lowercase and uppercase English letters and spaces.

- **Constraint 4:** The words in `s` are separated by a single space.

- **Constraint 5:** There are no leading or trailing spaces.
  
  

- **Source Code:**
  
  ```python
  class Solution:
      def truncateSentence(self, s: str, k: int) -> str:
          return " ".join(s.split()[0:k])
  ```

- **Runtime**: 35 *ms* and 54.65%

- **Memory:** 16.46 MB and 77.17%
