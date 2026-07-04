# Day 20 – Find First and Last Position of Element in Sorted Array

## Problem Details
- **Problem Number:** 34
- **Problem Name:** Find First and Last Position of Element in Sorted Array
- **Difficulty:** Medium
- **Platform:** LeetCode

## Problem Statement
Given a sorted array of integers `nums` in non-decreasing order, find the starting and ending position of a given target value.

If the target is not present in the array, return `[-1, -1]`.

The solution must have a runtime complexity of **O(log n)**.

### Example

**Input:**
nums = [5,7,7,8,8,10], target = 8

**Output:**
[3,4]

**Explanation:**
The target value `8` appears from index `3` to index `4`, so the answer is `[3,4]`.

---

## Approach Used

I solved this problem using **Binary Search**.

The idea is to perform Binary Search twice:
1. Find the **first occurrence** of the target.
2. Find the **last occurrence** of the target.

Whenever the target is found:
- For the first occurrence, continue searching on the **left half**.
- For the last occurrence, continue searching on the **right half**.

This efficiently finds both boundaries while maintaining the required logarithmic time complexity.

---

## Complexity Analysis

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

---

## Key Learning

- Binary Search
- First and Last Occurrence
- Searching in Sorted Arrays
- Boundary Search Technique
- Logarithmic Time Complexity

---

## Status

✅ Accepted on LeetCode

---

## Language

C++