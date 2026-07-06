# Day 22 – Kth Largest Element in an Array

## Problem Details
- **Problem Number:** 215
- **Problem Name:** Kth Largest Element in an Array
- **Difficulty:** Medium
- **Platform:** LeetCode

## Problem Statement
Given an integer array `nums` and an integer `k`, return the **kth largest** element in the array.

Note that it is the kth largest element in the sorted order, **not** the kth distinct element.

The follow-up asks for a solution without sorting the entire array.

### Example

**Input:**
nums = [3,2,1,5,6,4], k = 2

**Output:**
5

**Explanation:**
After arranging the elements in descending order `[6,5,4,3,2,1]`, the 2nd largest element is `5`.

---

## Approach Used

I solved this problem using a **Min Heap (Priority Queue)**.

The idea is to maintain a min heap containing only the **k largest elements** encountered so far.

- Traverse each element in the array.
- Insert it into the min heap.
- If the heap size exceeds `k`, remove the smallest element.
- After processing all elements, the top of the min heap is the **kth largest element**.

This approach avoids sorting the entire array and is more efficient when `k` is much smaller than the array size.

---

## Complexity Analysis

- **Time Complexity:** O(n log k)
- **Space Complexity:** O(k)

---

## Key Learning

- Priority Queue (Min Heap)
- Heap Operations
- Efficient Element Selection
- Optimizing Beyond Sorting
- Data Structure Selection

---

## Status

✅ Accepted on LeetCode

---

## Language

C++