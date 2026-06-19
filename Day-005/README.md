# Day 5 – Valid Perfect Square

## Problem Details

* Problem Number: 367
* Problem Name: Valid Perfect Square
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

Given a positive integer `num`, return `true` if `num` is a perfect square and `false` otherwise.

A perfect square is an integer that is the square of another integer.

## Approach Used

I checked integers one by one and verified whether their square was equal to the given number.

### Steps

1. Start with `i = 1`.
2. Calculate `i * i`.
3. If `i * i == num`, return `true`.
4. If `i * i > num`, stop checking.
5. If no such integer exists, return `false`.

## Complexity Analysis

* Time Complexity: O(√n)
* Space Complexity: O(1)

## Key Learning

* Understanding perfect squares
* Mathematical problem solving
* Iterative checking
* Avoiding built-in functions like `sqrt()`

## Status

✅ Accepted on LeetCode

## Language

C++
