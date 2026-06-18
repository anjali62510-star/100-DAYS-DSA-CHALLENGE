# Day 4 – Palindrome Number

## Problem Details

* Problem Number: 9
* Problem Name: Palindrome Number
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome and `false` otherwise.

A palindrome number reads the same forward and backward.

### Examples

Input:
121

Output:
true

Input:
-121

Output:
false

Input:
10

Output:
false

## Approach Used

I reversed the given number using digit extraction and compared the reversed number with the original number.

### Steps

1. Store the original number.
2. Extract digits one by one using `% 10`.
3. Build the reversed number.
4. Compare the reversed number with the original number.
5. Return `true` if both are equal, otherwise `false`.

## Complexity Analysis

* Time Complexity: O(log n)
* Space Complexity: O(1)

## Key Learning

* Number manipulation
* Digit extraction using modulo operator (`%`)
* Reversing an integer
* Comparing original and reversed values

## Status

✅ Accepted on LeetCode

## Language

C++
