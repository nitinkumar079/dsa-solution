# DSA Solutions

![Language](https://img.shields.io/badge/language-C%2B%2B%20%7C%20Python-blue)
![Platform](https://img.shields.io/badge/platform-LeetCode-orange)
![License](https://img.shields.io/badge/license-MIT-green)
![Problems Solved](https://img.shields.io/badge/problems%20solved-12-brightgreen)

Curated solutions to Data Structures & Algorithms problems from [LeetCode](https://leetcode.com), implemented in **C++** and **Python**. Each solution includes a clean approach, complexity analysis, and a runnable driver (`main`) for quick local testing.

## Problems

| # | Problem | Difficulty | Approach | Time | Space | C++ | Python |
|---|---------|------------|----------|------|-------|-----|--------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Hash map | O(n) | O(n) | [solution.cpp](leetcode/001-two-sum/solution.cpp) | [solution.py](leetcode/001-two-sum/solution.py) |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | Two pointers | O(n) | O(1) | [solution.cpp](leetcode/026-remove-duplicates-from-sorted-array/solution.cpp) | [solution.py](leetcode/026-remove-duplicates-from-sorted-array/solution.py) |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | Easy | Two pointers | O(n) | O(1) | [solution.cpp](leetcode/027-remove-element/solution.cpp) | [solution.py](leetcode/027-remove-element/solution.py) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Medium | Hash map with sorted key | O(n*k*logk) | O(n*k) | [solution.cpp](leetcode/049-group-anagrams/solution.cpp) | [solution.py](leetcode/049-group-anagrams/solution.py) |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | Single pass min tracking | O(n) | O(1) | [solution.cpp](leetcode/121-best-time-to-buy-and-sell-stock/solution.cpp) | [solution.py](leetcode/121-best-time-to-buy-and-sell-stock/solution.py) |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | Easy | Two pointers | O(n) | O(1) | [solution.cpp](leetcode/125-valid-palindrome/solution.cpp) | [solution.py](leetcode/125-valid-palindrome/solution.py) |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | Easy | Boyer-Moore voting | O(n) | O(1) | [solution.cpp](leetcode/169-majority-element/solution.cpp) | [solution.py](leetcode/169-majority-element/solution.py) |
| 172 | [Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/) | Easy | Count factors of 5 | O(log n) | O(1) | [solution.cpp](leetcode/172-factorial-trailing-zeroes/solution.cpp) | [solution.py](leetcode/172-factorial-trailing-zeroes/solution.py) |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | Hash set | O(n) | O(n) | [solution.cpp](leetcode/217-contains-duplicate/solution.cpp) | [solution.py](leetcode/217-contains-duplicate/solution.py) |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Medium | Prefix & suffix products | O(n) | O(1) | [solution.cpp](leetcode/238-product-of-array-except-self/solution.cpp) | [solution.py](leetcode/238-product-of-array-except-self/solution.py) |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | Easy | Two pointers / in-place | O(n) | O(1) | [solution.cpp](leetcode/283-move-zeroes/solution.cpp) | [solution.py](leetcode/283-move-zeroes/solution.py) |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Medium | Bucket sort | O(n) | O(n) | [solution.cpp](leetcode/347-top-k-frequent-elements/solution.cpp) | [solution.py](leetcode/347-top-k-frequent-elements/solution.py) |

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

![Progress](https://progress-bar.dev/12/?scale=500&title=solved&width=400)

---

Solutions are for learning purposes. Try solving each problem yourself before looking here.
