# Day 17 – Search Insert Position

## Problem Details
- **Problem Number:** 35
- **Problem Name:** Search Insert Position
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it should be inserted to maintain the sorted order.

The solution must run in **O(log n)** time complexity.

### Example

**Input:**
nums = [1,3,5,6], target = 5

**Output:**
2

**Explanation:**
The target `5` exists at index `2`.

---

## Approach Used

I solved this problem using the **Binary Search** algorithm.

Since the array is already sorted, Binary Search efficiently narrows down the search space by comparing the target with the middle element. If the target is found, its index is returned immediately. Otherwise, when the search ends, the `left` pointer indicates the correct position where the target should be inserted while preserving the sorted order.

This approach satisfies the required logarithmic time complexity.

---

## Complexity Analysis

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

---

## Key Learning

- Binary Search
- Searching in a sorted array
- Finding insertion position
- Overflow-safe midpoint calculation
- Logarithmic time complexity

---

## Status

✅ Accepted on LeetCode

---

## Language

C++