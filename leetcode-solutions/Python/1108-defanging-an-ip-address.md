# Leetcode Problem #1108: [Defanging an IP Address](https://leetcode.com/problems/defanging-an-ip-address/)

- **Difficulty:** `Easy` 

- **Language:** `Python3`

- **Companies:**  Unknown 

- **Topics:** [String](https://leetcode.com/tag/string/)

- **Description:** Given a valid (IPv4) IP `address`, return a defanged version of that IP address. A *defanged IP address* replaces every period `"."` with `"[.]"`.

- **Testcase 1:**
  
  - **Input:** address = "1.1.1.1"
    **Output:** "1[.]1[.]1[.]1"

- **Testcase 2:**
  
  - **Input:** address = "255.100.50.0"
    **Output:** "255[.]100[.]50[.]0"

- **Constraint 1**: The given `address` is a valid IPv4 address.

- **Acceptance Rate:** **89.3%**

- **Source Code:**
  
  ```python
  class Solution(object):
      def defangIPaddr(self, address):
          return address.replace(".","[.]")
  ```

- **Runtime**: 19ms and 14.83%

- **Memory:** 11.63MB and 52.72%
