# Day 26 – Length of Last Word

## Problem Details
- **Problem Number:** 58
- **Problem Name:** Length of Last Word
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement

Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A word is defined as a maximal substring consisting of non-space characters only.

### Example

**Input:**
s = "Hello World"

**Output:**
5

**Explanation:**
The last word is `"World"`, which has a length of `5`.

---

## Approach Used

I solved this problem using **Reverse Traversal**.

The idea is to traverse the string from the end:

1. Skip all trailing spaces.
2. Count the characters of the last word.
3. Stop when a space or the beginning of the string is reached.

This approach efficiently handles trailing spaces and avoids creating extra strings or using built-in split functions.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- String Traversal
- Reverse Iteration
- Handling Edge Cases
- Space Optimization
- Efficient String Processing

---

## Status

✅ Accepted on LeetCode

---

## Language

C++