# Day 19 – Rotate Array

## Problem Details
- **Problem Number:** 189
- **Problem Name:** Rotate Array
- **Difficulty:** Medium
- **Platform:** LeetCode

## Problem Statement
Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

The solution should be implemented efficiently, and the follow-up asks for an in-place solution using **O(1)** extra space.

### Example

**Input:**
nums = [1,2,3,4,5,6,7], k = 3

**Output:**
[5,6,7,1,2,3,4]

**Explanation:**
After rotating the array three steps to the right, the last three elements move to the beginning while maintaining their order.

---

## Approach Used

I solved this problem using the **Reverse Algorithm**.

The key idea is:
1. Reverse the entire array.
2. Reverse the first `k` elements.
3. Reverse the remaining `n-k` elements.

Before performing these operations, I calculated `k = k % n` to handle cases where `k` is greater than the size of the array.

This approach rotates the array efficiently without using any extra space.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- Reverse Algorithm
- In-place array manipulation
- Array rotation
- Modulo operation for cyclic shifts
- Space optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++