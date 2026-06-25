# Day 11 – Two Sum

## Problem Details

* Problem Number: 1
* Problem Name: Two Sum
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

## Approach Used

I used a Hash Map (`unordered_map`) to store numbers and their indices while traversing the array.

For each element:

1. Calculate the complement (`target - current_element`).
2. Check if the complement already exists in the hash map.
3. If found, return the stored index and current index.
4. Otherwise, store the current element and its index.

This avoids checking every pair and significantly improves efficiency.

### Example

Input:
nums = [2,7,11,15]
target = 9

Output:
[0,1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(n)

## Key Learning

* Hash Maps (`unordered_map`)
* Complement technique
* Optimizing brute-force solutions
* Fast lookups in constant time

## Status

✅ Accepted on LeetCode

## Language

C++
