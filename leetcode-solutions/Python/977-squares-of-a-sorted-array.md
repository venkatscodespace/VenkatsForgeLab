# Leetcode Problem #977: [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)

- **Difficulty:** `Easy`

- **Language:** `Python3` 

- **Companies:**  Amazon, Yandex, Bloomberg, Facebook, Google, Tinkoff

- **Topics:** [Array](https://leetcode.com/tag/array/), [Two Pointers](https://leetcode.com/tag/two-pointers/), [Sorting](https://leetcode.com/tag/sorting/)

- **Description:** Given an integer array `nums` sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

- **- Testcase 1:**
  
  -  **Input:** nums = [-4,-1,0,3,10]
    **Output:** [0,1,9,16,100]
    **Explanation:** After squaring, the array becomes [16,1,0,9,100].
    After sorting, it becomes [0,1,9,16,100].

- **Testcase 2:**  
  
  - **Input:** nums = [-7,-3,2,3,11]
    **Output:** [4,9,9,49,121]

- Constraint 1:  `1 <= nums.length <= 10**4`

- Constraint 2: `-10**4 <= nums[i] <= 10**4`

- Constraint 3: `nums` is sorted in **non-decreasing** order.

- **Acceptance Rate:** **72.9%**

- **Source Code:**

```python
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l=[i**2 for i in nums]
        l.sort()
        return l
```

- **Runtime**: 147ms and 86.74%

- **Memory:** 18.66MB and 76.56%
