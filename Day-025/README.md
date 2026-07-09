# Day 25 – Merge Sorted Array

## Problem Details
- **Problem Number:** 88
- **Problem Name:** Merge Sorted Array
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement

You are given two sorted integer arrays `nums1` and `nums2`, along with integers `m` and `n` representing the number of valid elements in each array.

Merge `nums2` into `nums1` so that the final array remains sorted. The merge must be performed **in-place** without using an extra array.

### Example

**Input:**
nums1 = [1,2,3,0,0,0], m = 3

nums2 = [2,5,6], n = 3

**Output:**
[1,2,2,3,5,6]

---

## Approach Used

I solved this problem using the **Three Pointer Technique**.

Since `nums1` already contains extra space at the end, I started merging from the last index instead of the beginning.

Three pointers were used:

- `i` → Last valid element in `nums1`
- `j` → Last element in `nums2`
- `k` → Last position of `nums1`

At each step:
- Compare `nums1[i]` and `nums2[j]`.
- Place the larger element at `nums1[k]`.
- Move the corresponding pointer backward.
- After the comparison loop, copy any remaining elements from `nums2`.

This avoids overwriting elements in `nums1` and achieves an efficient in-place merge.

---

## Complexity Analysis

- **Time Complexity:** O(m + n)
- **Space Complexity:** O(1)

---

## Key Learning

- Three Pointer Technique
- In-place Array Manipulation
- Efficient Merging of Sorted Arrays
- Pointer Traversal from the End
- Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++