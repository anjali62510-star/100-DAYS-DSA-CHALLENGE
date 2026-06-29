# Day 15 – Pascal's Triangle II

## Problem Details

* **Problem Number:** 119
* **Problem Name:** Pascal's Triangle II
* **Difficulty:** Easy
* **Platform:** LeetCode

## Problem Statement

Given an integer `rowIndex`, return the `rowIndex`th (0-indexed) row of Pascal's Triangle.

In Pascal's Triangle, each number is the sum of the two numbers directly above it.

### Example

**Input:**
rowIndex = 3

**Output:**
[1,3,3,1]

## Approach Used

I used an **in-place Dynamic Programming** approach to generate only the required row instead of constructing the entire Pascal's Triangle.

Starting with the first row `[1]`, I incrementally built each subsequent row by:

* Appending `1` at the end.
* Updating the middle elements from **right to left** to avoid overwriting values that were still needed.

This approach satisfies the follow-up requirement by using only **O(rowIndex)** extra space.

## Complexity Analysis

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

## Key Learning

* Pascal's Triangle pattern
* Dynamic Programming
* In-place array updates
* Space optimization
* Right-to-left traversal for safe updates

## Status

✅ Accepted on LeetCode

## Language

C++
