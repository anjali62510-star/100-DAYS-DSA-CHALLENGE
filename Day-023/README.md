# Day 23 – Find the Duplicate Number

## Problem Details
- **Problem Number:** 287
- **Problem Name:** Find the Duplicate Number
- **Difficulty:** Medium
- **Platform:** LeetCode

## Problem Statement
Given an array `nums` containing `n + 1` integers where each integer is in the range `[1, n]`, return the duplicate number.

Constraints:
- Do not modify the input array.
- Use only constant extra space.
- Achieve better than O(n log n) time complexity.

### Example

**Input:**
nums = [1,3,4,2,2]

**Output:**
2

**Explanation:**
The number `2` appears more than once in the array.

---

## Approach Used

I solved this problem using **Floyd's Tortoise and Hare (Cycle Detection) Algorithm**.

The key observation is that the array can be viewed as a linked list where:
- Each index represents a node.
- The value at each index points to the next node.

Since one number is duplicated, two indices point to the same value, creating a cycle.

The algorithm works in two phases:
1. Use a slow pointer (moves one step) and a fast pointer (moves two steps) to detect the cycle.
2. Reset one pointer to the beginning and move both one step at a time. The point where they meet is the duplicate number.

This approach satisfies all the problem constraints without modifying the array or using extra space.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- Floyd's Cycle Detection Algorithm
- Two Pointer Technique
- Linked List Cycle Concept
- Problem Transformation
- Constant Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++