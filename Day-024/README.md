# Day 24 – Number of Subarrays With LCM Equal to K

## Problem Details
- **Problem Number:** 2470
- **Problem Name:** Number of Subarrays With LCM Equal to K
- **Difficulty:** Medium
- **Platform:** LeetCode

## Problem Statement

Given an integer array `nums` and an integer `k`, return the number of contiguous subarrays whose **Least Common Multiple (LCM)** is exactly `k`.

### Example

**Input:**
nums = [3,6,2,7,1]
k = 6

**Output:**
4

**Explanation:**
There are four subarrays whose LCM is equal to `6`.

---

## Approach Used

I solved this problem using **Brute Force with Incremental LCM Calculation**.

For every possible starting index, I extended the subarray one element at a time while maintaining the current LCM.

The LCM of two numbers was calculated using the relation:

LCM(a, b) = (a × b) / GCD(a, b)

To optimize the solution, I stopped extending the current subarray whenever:
- The current LCM became greater than `k`, or
- The current LCM was no longer a divisor of `k`.

Since adding more elements can only keep the LCM the same or increase it, these conditions ensure that no further valid subarrays can be formed.

---

## Complexity Analysis

- **Time Complexity:** O(n² log M)
- **Space Complexity:** O(1)

where **M** is the maximum value involved in GCD/LCM computations.

---

## Key Learning

- Least Common Multiple (LCM)
- Greatest Common Divisor (GCD)
- Number Theory
- Brute Force Optimization
- Early Pruning Technique

---

## Status

✅ Accepted on LeetCode

---

## Language

C++