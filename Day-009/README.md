# Day 9 – Reverse Integer

## Problem Details

* Problem Number: 7
* Problem Name: Reverse Integer
* Difficulty: Medium
* Platform: LeetCode

## Problem Statement

Given a signed 32-bit integer `x`, return its digits reversed.

If reversing the integer causes the value to go outside the signed 32-bit integer range `[-2³¹, 2³¹ - 1]`, return `0`.

## Approach Used

I extracted digits one by one using the modulo operator (`%`) and built the reversed number.

Before updating the reversed value, I checked whether the result could overflow the 32-bit integer range. If an overflow was detected, I returned `0`.

### Example

Input:
123

Output:
321

Input:
-123

Output:
-321

Input:
120

Output:
21

## Complexity Analysis

* Time Complexity: O(log n)
* Space Complexity: O(1)

## Key Learning

* Digit extraction using `% 10`
* Removing digits using `/ 10`
* Reversing an integer
* Overflow handling
* Edge case management

## Status

✅ Accepted on LeetCode

## Language

C++
