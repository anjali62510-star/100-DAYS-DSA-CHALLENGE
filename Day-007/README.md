# Day 7 – Plus One

## Problem Details

* Problem Number: 66
* Problem Name: Plus One
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

You are given a large integer represented as an array of digits, where each element represents a single digit.

Increment the integer by one and return the resulting array of digits.

## Approach Used

I traversed the array from right to left and simulated the addition of one.

### Steps

1. Start from the last digit.
2. If the digit is less than 9, increment it and return the array.
3. If the digit is 9, change it to 0 and carry the addition to the next digit.
4. If all digits are 9, insert 1 at the beginning of the array.

### Example

Input:
[1,2,9]

Output:
[1,3,0]

Input:
[9,9,9]

Output:
[1,0,0,0]

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Learning

* Array traversal
* Carry propagation
* Handling edge cases
* Simulating arithmetic operations on arrays

## Status

✅ Accepted on LeetCode

## Language

C++
