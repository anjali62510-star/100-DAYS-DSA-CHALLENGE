# Day 21 – Maximum Subarray

## Problem Details
- **Problem Number:** 53
- **Problem Name:** Maximum Subarray
- **Difficulty:** Medium
- **Platform:** LeetCode

## Problem Statement
Given an integer array `nums`, find the contiguous subarray with the largest sum and return its sum.

### Example

**Input:**
nums = [-2,1,-3,4,-1,2,1,-5,4]

**Output:**
6

**Explanation:**
The subarray `[4,-1,2,1]` has the largest sum, which is `6`.

---

## Approach Used

I solved this problem using **Kadane's Algorithm**.

The idea is to keep track of:
- `currentSum` → Maximum sum of the current subarray.
- `maxSum` → Maximum subarray sum found so far.

At each element, I decide whether to:
1. Start a new subarray from the current element.
2. Extend the existing subarray.

The better of these two choices becomes the new `currentSum`, and `maxSum` is updated whenever a larger sum is found.

This greedy approach finds the maximum subarray in a single traversal.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- Kadane's Algorithm
- Greedy Technique
- Dynamic Programming Optimization
- Maximum Subarray Problem
- Efficient Array Traversal

---

## Status

✅ Accepted on LeetCode

---

## Language

C++