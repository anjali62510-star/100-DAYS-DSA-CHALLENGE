# Day 29 – Find First Palindromic String in the Array

## Problem Details

- **Problem Number:** 2108
- **Problem Name:** Find First Palindromic String in the Array
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given an array of strings `words`, return the **first palindromic string** in the array. If no palindrome exists, return an empty string `""`.

A palindrome is a string that reads the same forward and backward.

### Example

**Input:**

words = ["abc","car","ada","racecar","cool"]

**Output:**

"ada"

**Explanation:**

Although `"racecar"` is also a palindrome, `"ada"` appears first in the array.

---

## Approach Used

I solved this problem using **Linear Traversal with the Two Pointer Technique**.

The algorithm works as follows:

1. Traverse the array from left to right.
2. For each string, use two pointers:
   - `left` starts from the beginning.
   - `right` starts from the end.
3. Compare characters while moving both pointers inward.
4. If all corresponding characters match, the string is a palindrome.
5. Return the first palindrome immediately.
6. If no palindrome is found after checking all strings, return an empty string.

Using an **early return** avoids unnecessary computations once the required answer is found.

---

## Complexity Analysis

- **Time Complexity:** O(n × m)
  - `n` = number of strings
  - `m` = maximum length of a string
- **Space Complexity:** O(1)

---

## Key Learning

- Two Pointer Technique
- String Traversal
- Palindrome Checking
- Early Return Optimization
- Efficient Search in Arrays

---

## Status

✅ Accepted on LeetCode

---

## Language

C++