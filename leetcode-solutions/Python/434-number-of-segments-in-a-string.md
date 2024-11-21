# [434. Number of Segments in a String](https://leetcode.com/problems/number-of-segments-in-a-string/)

- **Difficulty:** `Easy`

- **Language:** `Python3`   

- **Companies:** Google 

- **Topics:** [String](https://leetcode.com/tag/string/) 

- **Description:** Given a string `s`, return *the number of segments in the string*. A **segment** is defined to be a contiguous sequence of **non-space characters**. 

- **Testcase 1:**
  
  - **Input:** s = "Hello, my name is John"
    **Output:** 5
    **Explanation:** The five segments are ["Hello,", "my", "name", "is", "John"]

- **Testcase 2:**
  
  - **Input:** s = "Hello"
    **Output:** 1

- **Constraint 1:** `0 <= s.length <= 300`

- **Constraint 2:** `s` consists of lowercase and uppercase English letters, digits, or one of the following characters `"!@#$%^&*()_+-=',.:"`.

- **Constraint 3:** The only space character in `s` is `' '`.

- **Acceptance Rate:** **36.4%**

- **Source Code:**
  
  ```python
  class Solution:
      def countSegments(self, s: str) -> int:
          return len(s.split())
  ```

- **Runtime**: 24 ms and 98.23%

- **Memory:** 16.32 MB and 67.45%
