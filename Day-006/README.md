# Day 6 – Happy Number

## Problem Details

* Problem Number: 202
* Problem Name: Happy Number
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

A happy number is a number that eventually reaches 1 when replaced by the sum of the squares of its digits repeatedly.

Return `true` if the number is happy, otherwise return `false`.

## Approach Used

I repeatedly calculated the sum of the squares of the digits of the number.

To avoid infinite loops, I used a hash set (`unordered_set`) to store previously seen numbers. If a number repeats, it means a cycle exists and the number is not happy.

### Example

19 → 82 → 68 → 100 → 1

Since the process reaches 1, 19 is a Happy Number.

## Complexity Analysis

* Time Complexity: O(log n)
* Space Complexity: O(log n)

## Key Learning

* Digit extraction using `% 10`
* Removing digits using `/ 10`
* Hash Set (`unordered_set`)
* Cycle detection
* Number manipulation

## Status

✅ Accepted on LeetCode

## Language

C++
