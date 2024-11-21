# [1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence](https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/)

- **Difficulty:** `Easy`

- **Language:** `Python3`  

- **Companies:** Amazon, Google, Microsoft, and Apple,

- **Topics:** [Two Pointers](https://leetcode.com/tag/two-pointers/), [String](https://leetcode.com/tag/string/), [String Matching](https://leetcode.com/tag/string-matching/)

- **Description:** Given a `sentence` that consists of some words separated by a **single space**, and a `searchWord`, check if `searchWord` is a prefix of any word in `sentence`. Return *the index of the word in* `sentence` *(**1-indexed**) where* `searchWord` *is a prefix of this word*. If `searchWord` is a prefix of more than one word, return the index of the first word **(minimum index)**. If there is no such word return `-1`. A **prefix** of a string `s` is any leading contiguous substring of `s`.

- **Acceptance Rate:** 64.4%

- **Testcase 1:**
  
  - **Input:** sentence = "i love eating burger", searchWord = "burg"
  
  - **Output:** 4
  
  - **Explanation:** "burg" is prefix of "burger" which is the 4th word in the sentence.

- **Testcase 2:**
  
  - **Input:** sentence = "this problem is an easy problem", searchWord = "pro"
  
  - **Output:** 2
  
  - **Explanation:** "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.

- **Testcase 3:**
  
  - **Input:** sentence = "i am tired", searchWord = "you"
  - **Output:** -1
  - **Explanation:** "you" is not a prefix of any word in the sentence.

- **Constraint 1:** `1 <= sentence.length <= 100`

- **Constraint 2:** `1 <= searchWord.length <= 10`

- **Constraint 3:** `sentence` consists of lowercase English letters and spaces.

- **Constraint 4:** `searchWord` consists of lowercase English letters.

- **Hint 1:** First extract the words of the sentence.

- **Hint 2:** Check for each word if searchWord occurs at index 0, if so return the index of this word (1-indexed)

- **Hint 3:** If searchWord doesn't exist as a prefix of any word return the default value (-1).

- **Source Code:**
  
  ```python
  class Solution:
      def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
          s=sentence.split()
          for i in s:
              if i.startswith(searchWord):
                  return s.index(i)+1
          else:
              return -1
  ```

- **Runtime**: 37 ms and 38.04%

- **Memory:** 16.32 MB and 92.67%

- **Similiar Questions:**
  
  - [2185. Counting Words With a Given Prefix](https://leetcode.com/problems/counting-words-with-a-given-prefix/) 
  
  - [2255. Count Prefixes of a Given String](https://leetcode.com/problems/count-prefixes-of-a-given-string/)
