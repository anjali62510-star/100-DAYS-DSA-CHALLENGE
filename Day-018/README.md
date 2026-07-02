# Day 18 – Move Zeroes

## Problem Details
- **Problem Number:** 283
- **Problem Name:** Move Zeroes
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement
Given an integer array `nums`, move all `0`s to the end while maintaining the relative order of the non-zero elements.

The operation must be performed **in-place**, without creating a copy of the array.

### Example

**Input:**
nums = [0,1,0,3,12]

**Output:**
[1,3,12,0,0]

**Explanation:**
All non-zero elements retain their original order, while all zeroes are moved to the end of the array.

---

## Approach Used

I solved this problem using the **Two Pointers** technique.

- One pointer (`i`) traverses the array.
- Another pointer (`j`) keeps track of the position where the next non-zero element should be placed.
- Whenever a non-zero element is found, I swap it with the element at index `j` and increment `j`.

This approach efficiently moves all non-zero elements to the front while naturally shifting all zeroes to the end without using any extra space.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- Two Pointers Technique
- In-place array manipulation
- Maintaining relative order of elements
- Space optimization
- Efficient array traversal

---

## Status

✅ Accepted on LeetCode

---

## Language

C++