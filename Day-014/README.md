# Day 14 – Find Greatest Common Divisor of Array

## Problem Details
- **Problem Number:** 1979
- **Problem Name:** Find Greatest Common Divisor of Array
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement
Given an integer array `nums`, return the greatest common divisor (GCD) of the smallest and largest numbers in the array.

### Example

**Input:**
nums = [2,5,6,9,10]

**Output:**
2

**Explanation:**
- Smallest element = 2
- Largest element = 10
- GCD(2,10) = 2

## Approach Used
I first traversed the array to determine the smallest and largest elements. After obtaining these values, I applied the **Euclidean Algorithm** to efficiently compute their Greatest Common Divisor (GCD).

The Euclidean Algorithm repeatedly replaces the larger number with the remainder of dividing it by the smaller number until the remainder becomes zero. The last non-zero value is the GCD.

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Key Learning
- Euclidean Algorithm
- Greatest Common Divisor (GCD)
- Finding minimum and maximum elements in an array
- Mathematical optimization

## Status
✅ Accepted on LeetCode

## Language
C++