# DSA Solutions

![Language](https://img.shields.io/badge/language-C%2B%2B%20%7C%20Python-blue)
![Platform](https://img.shields.io/badge/platform-LeetCode-orange)
![License](https://img.shields.io/badge/license-MIT-green)
![Problems Solved](https://img.shields.io/badge/problems%20solved-34-brightgreen)

Curated solutions to Data Structures & Algorithms problems from [LeetCode](https://leetcode.com), implemented in **C++** and **Python**. Each solution includes a clean approach, complexity analysis, and a runnable driver (`main`) for quick local testing.

## Problems

| # | Problem | Difficulty | Approach | Time | Space | C++ | Python |
|---|---------|------------|----------|------|-------|-----|--------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Hash map | O(n) | O(n) | [solution.cpp](leetcode/001-two-sum/solution.cpp) | [solution.py](leetcode/001-two-sum/solution.py) |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | Easy | Reverse number | O(log n) | O(1) | [solution.cpp](leetcode/009-palindrome-number/solution.cpp) | [solution.py](leetcode/009-palindrome-number/solution.py) |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | Easy | Hash map | O(n) | O(1) | [solution.cpp](leetcode/0013-roman-to-integer/solution.cpp) | [solution.py](leetcode/0013-roman-to-integer/solution.py) |
| 14 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | Easy | Vertical scan | O(n*m) | O(1) | [solution.cpp](leetcode/0014-longest-common-prefix/solution.cpp) | [solution.py](leetcode/0014-longest-common-prefix/solution.py) |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | Stack | O(n) | O(n) | [solution.cpp](leetcode/020-valid-parentheses/solution.cpp) | [solution.py](leetcode/020-valid-parentheses/solution.py) |
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | Two-pointer merge | O(n) | O(1) | [solution.cpp](leetcode/021-merge-two-sorted-lists/solution.cpp) | [solution.py](leetcode/021-merge-two-sorted-lists/solution.py) |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | Two pointers | O(n) | O(1) | [solution.cpp](leetcode/026-remove-duplicates-from-sorted-array/solution.cpp) | [solution.py](leetcode/026-remove-duplicates-from-sorted-array/solution.py) |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | Easy | Two pointers from end | O(n+m) | O(1) | [solution.cpp](leetcode/088-merge-sorted-array/solution.cpp) | [solution.py](leetcode/088-merge-sorted-array/solution.py) |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | Easy | Kadane's algorithm | O(n) | O(1) | [solution.cpp](leetcode/053-maximum-subarray/solution.cpp) | [solution.py](leetcode/053-maximum-subarray/solution.py) |
| 35 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy | Binary search | O(log n) | O(1) | [solution.cpp](leetcode/035-search-insert-position/solution.cpp) | [solution.py](leetcode/035-search-insert-position/solution.py) |
| 66 | [Plus One](https://leetcode.com/problems/plus-one/) | Easy | Reverse traversal | O(n) | O(1) | [solution.cpp](leetcode/066-plus-one/solution.cpp) | [solution.py](leetcode/066-plus-one/solution.py) |
| 67 | [Add Binary](https://leetcode.com/problems/add-binary/) | Easy | Bit-by-bit carry | O(n) | O(1) | [solution.cpp](leetcode/067-add-binary/solution.cpp) | [solution.py](leetcode/067-add-binary/solution.py) |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | Easy | Two pointers | O(n) | O(1) | [solution.cpp](leetcode/027-remove-element/solution.cpp) | [solution.py](leetcode/027-remove-element/solution.py) |
| 28 | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | Easy | Sliding window / substring match | O(n*m) | O(1) | [solution.cpp](leetcode/0028-find-the-index-of-the-first-occurrence-in-a-string/solution.cpp) | [solution.py](leetcode/0028-find-the-index-of-the-first-occurrence-in-a-string/solution.py) |
| 69 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | Easy | Binary search | O(log n) | O(1) | [solution.cpp](leetcode/0069-sqrtx/solution.cpp) | [solution.py](leetcode/0069-sqrtx/solution.py) |
| 190 | [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | Easy | Bit manipulation | O(1) | O(1) | [solution.cpp](leetcode/0190-reverse-bits/solution.cpp) | [solution.py](leetcode/0190-reverse-bits/solution.py) |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Easy | Hash map / char count | O(n) | O(1) | [solution.cpp](leetcode/0242-valid-anagram/solution.cpp) | [solution.py](leetcode/0242-valid-anagram/solution.py) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Medium | Hash map with sorted key | O(n*k*logk) | O(n*k) | [solution.cpp](leetcode/049-group-anagrams/solution.cpp) | [solution.py](leetcode/049-group-anagrams/solution.py) |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | Single pass min tracking | O(n) | O(1) | [solution.cpp](leetcode/121-best-time-to-buy-and-sell-stock/solution.cpp) | [solution.py](leetcode/121-best-time-to-buy-and-sell-stock/solution.py) |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | Easy | Two pointers | O(n) | O(1) | [solution.cpp](leetcode/125-valid-palindrome/solution.cpp) | [solution.py](leetcode/125-valid-palindrome/solution.py) |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | Easy | XOR | O(n) | O(1) | [solution.cpp](leetcode/136-single-number/solution.cpp) | [solution.py](leetcode/136-single-number/solution.py) |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | Easy | Boyer-Moore voting | O(n) | O(1) | [solution.cpp](leetcode/169-majority-element/solution.cpp) | [solution.py](leetcode/169-majority-element/solution.py) |
| 172 | [Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/) | Easy | Count factors of 5 | O(log n) | O(1) | [solution.cpp](leetcode/172-factorial-trailing-zeroes/solution.cpp) | [solution.py](leetcode/172-factorial-trailing-zeroes/solution.py) |
| 202 | [Happy Number](https://leetcode.com/problems/happy-number/) | Easy | Hash set / cycle detection | O(log n) | O(log n) | [solution.cpp](leetcode/202-happy-number/solution.cpp) | [solution.py](leetcode/202-happy-number/solution.py) |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | Hash set | O(n) | O(n) | [solution.cpp](leetcode/217-contains-duplicate/solution.cpp) | [solution.py](leetcode/217-contains-duplicate/solution.py) |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Medium | Prefix & suffix products | O(n) | O(1) | [solution.cpp](leetcode/238-product-of-array-except-self/solution.cpp) | [solution.py](leetcode/238-product-of-array-except-self/solution.py) |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/) | Easy | Sum formula | O(n) | O(1) | [solution.cpp](leetcode/268-missing-number/solution.cpp) | [solution.py](leetcode/268-missing-number/solution.py) |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | Easy | Two pointers / in-place | O(n) | O(1) | [solution.cpp](leetcode/283-move-zeroes/solution.cpp) | [solution.py](leetcode/283-move-zeroes/solution.py) |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Medium | Bucket sort | O(n) | O(n) | [solution.cpp](leetcode/347-top-k-frequent-elements/solution.cpp) | [solution.py](leetcode/347-top-k-frequent-elements/solution.py) |
| 70 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | Easy | Fibonacci / DP | O(n) | O(1) | [solution.cpp](leetcode/070-climbing-stairs/solution.cpp) | [solution.py](leetcode/070-climbing-stairs/solution.py) |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | DFS recursion | O(n) | O(h) | [solution.cpp](leetcode/104-maximum-depth-of-binary-tree/solution.cpp) | [solution.py](leetcode/104-maximum-depth-of-binary-tree/solution.py) |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | Easy | Floyd's cycle detection | O(n) | O(1) | [solution.cpp](leetcode/141-linked-list-cycle/solution.cpp) | [solution.py](leetcode/141-linked-list-cycle/solution.py) |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | Iterative reversal | O(n) | O(1) | [solution.cpp](leetcode/206-reverse-linked-list/solution.cpp) | [solution.py](leetcode/206-reverse-linked-list/solution.py) |
| 58 | [Length of Last Word](https://leetcode.com/problems/length-of-last-word/) | Easy | Reverse traversal | O(n) | O(1) | [solution.cpp](leetcode/058-length-of-last-word/solution.cpp) | [solution.py](leetcode/058-length-of-last-word/solution.py) |
| 83 | [Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) | Easy | Single pass | O(n) | O(1) | [solution.cpp](leetcode/083-remove-duplicates-from-sorted-list/solution.cpp) | [solution.py](leetcode/083-remove-duplicates-from-sorted-list/solution.py) |
| 118 | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | Easy | DP / simulation | O(n²) | O(1) | [solution.cpp](leetcode/118-pascals-triangle/solution.cpp) | [solution.py](leetcode/118-pascals-triangle/solution.py) |
| 231 | [Power of Two](https://leetcode.com/problems/power-of-two/) | Easy | Bit manipulation | O(1) | O(1) | [solution.cpp](leetcode/231-power-of-two/solution.cpp) | [solution.py](leetcode/231-power-of-two/solution.py) |

## Repository Structure

```
dsa-solution/
└── leetcode/
    └── <problem-number>-<problem-name>/
        ├── solution.cpp
        └── solution.py
```

## Running Locally

**C++**
```bash
g++ -std=c++17 leetcode/001-two-sum/solution.cpp -o sol && ./sol
```

**Python**
```bash
python leetcode/001-two-sum/solution.py
```

## Progress

![Progress](https://progress-bar.dev/34/?scale=500&title=solved&width=400)

---

## Automated Updates

New solutions are added automatically by [`daily-dsa.ps1`](https://github.com/nitinkumar079/dsa-solution) running on Windows Task Scheduler: every day it pulls the latest problems from [hogan-tech/leetcode-solution](https://github.com/hogan-tech/leetcode-solution) (MIT), picks the next 2-3 unsolved ones (easy first), and commits them here.

> **Attribution:** Solutions referenced under `leetcode/<number>-*/` may be adapted from [hogan-tech/leetcode-solution](https://github.com/hogan-tech/leetcode-solution), licensed under the [MIT License](https://github.com/hogan-tech/leetcode-solution/blob/main/LICENSE). Each problem folder links to the original source.

Solutions are for learning purposes. Try solving each problem yourself before looking here.
