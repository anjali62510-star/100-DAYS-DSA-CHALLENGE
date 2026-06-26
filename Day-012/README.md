# Day 12 – Contains Duplicate

## Problem Details

* Problem Number: 217
* Problem Name: Contains Duplicate
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

### Examples

Input:
nums = [1,2,3,1]

Output:
true

Input:
nums = [1,2,3,4]

Output:
false

## Approach Used

I used a Hash Set (`unordered_set`) to efficiently keep track of the elements that have already been seen.

For each element:

1. Check whether it already exists in the hash set.
2. If it does, a duplicate has been found, so return `true`.
3. Otherwise, insert the element into the hash set and continue.

This approach avoids unnecessary comparisons and provides an optimal solution.

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(n)

## Key Learning

* Using `unordered_set` for constant-time lookups
* Efficient duplicate detection
* Choosing the right data structure for optimization
* Improving from O(n²) brute force to O(n)

## Status

✅ Accepted on LeetCode

## Language

C++
