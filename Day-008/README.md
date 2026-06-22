# Day 8 – Excel Sheet Column Number

## Problem Details

* Problem Number: 171
* Problem Name: Excel Sheet Column Number
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

Given a string representing an Excel column title, return its corresponding column number.

Examples:

* A → 1
* AB → 28
* ZY → 701

## Approach Used

I treated the Excel column title as a number in a base-26 system.

For each character:

1. Convert the character to its numerical value (`A = 1, B = 2, ..., Z = 26`).
2. Multiply the current result by 26.
3. Add the value of the current character.

This builds the final column number efficiently.

### Example

Input:
AB

Calculation:
(1 × 26) + 2 = 28

Output:
28

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Learning

* Character-to-number mapping
* String traversal
* Positional value systems
* Base-26 conversion concepts

## Status

✅ Accepted on LeetCode

## Language

C++
