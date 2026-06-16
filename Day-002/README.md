# Day 2 – Add Digits

## Problem Details

* Problem Number: 258
* Problem Name: Add Digits
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

### Example

Input:
38

Output:
2

Explanation:
38 → 3 + 8 = 11
11 → 1 + 1 = 2

## Approach

Used digit extraction and repeated summation.

1. Extract each digit using `% 10`
2. Add digits to a running sum
3. Remove the last digit using `/ 10`
4. Repeat until the number becomes a single digit

## Complexity Analysis

* Time Complexity: O(log n)
* Space Complexity: O(1)

## Learning

* Digit manipulation
* Modulo operator usage
* Integer division
* Loop-based simulation

## Status

✅ Accepted on LeetCode

## Language

C++
