# [1822. Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/)

- **Difficulty:**  `Easy`

- **Language:** `Python3` 

- **Companies:** Flipkart, Morgan Stanley, Accolite, Amazon, Microsoft, D-E-Shaw,  Intuit, Opera
  
  > Morgan Stanley, founded in 1935 and headquartered in New York City, is a leading global financial services firm specializing in investment banking, securities, wealth management, and investment management. 
  > 
  > Accolite, established in 2007 in Dallas, Texas, provides digital transformation services and IT solutions across various industries, including banking, healthcare, and telecommunications. 
  > 
  > D. E. Shaw & Co., founded in 1988 in New York City, is a global investment management firm known for its quantitative and systematic investing strategies using advanced technology and data science. 
  > 
  > Intuit, founded in 1983 and based in Mountain View, California, offers financial management and tax preparation software such as TurboTax, QuickBooks, and Mint, serving individuals and small businesses. 

- **Topics:** [Array](https://leetcode.com/tag/array/), [Math](https://leetcode.com/tag/math/)

- **Description:** There is a function `signFunc(x)` that returns:
  
  - `1` if `x` is positive.
  - `-1` if `x` is negative.
  - `0` if `x` is equal to `0`.
  
  You are given an integer array `nums`. Let `product` be the product of all values in the array `nums`.
  
  Return `signFunc(product)`. 

- **Testcase 1:**
  
  - **Input:** nums = [-1,-2,-3,-4,3,2,1]
    **Output:** 1
    **Explanation:** The product of all values in the array is 144, and signFunc(144)  = 1

- **Testcase 2:**
  
  - **Input:** nums = [1,5,0,2,-3]
    **Output:** 0
    **Explanation:** The product of all values in the array is 0, and signFunc(0) = 0

- **Testcase 3:**
  
  - **Input:** nums = [-1,1,-1,1,-1]
    **Output:** -1
    **Explanation:** The product of all values in the array is -1, and signFunc(-1) = -1

- **Constraint 1:** `1 <= nums.length <= 1000`

- **Constraint 2:** `-100 <= nums[i] <= 100`

- **Acceptance Rate:** **65.3%**

- **Source Code:**
  
  ```python
  def signFunc(x):
      if x > 0:
          return 1
      elif x < 0:
          return -1
      else:
          return 0 
  class Solution:
      def arraySign(self, nums: List[int]) -> int:
          product=1
          for i in nums:
              product*=i
          return signFunc(product)
  ```

- **Runtime**: 61 ms and 31.13%

- **Memory:** 16.62 MB and 72.91%
