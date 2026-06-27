# Day 13 – Best Time to Buy and Sell Stock

## Problem Details

* Problem Number: 121
* Problem Name: Best Time to Buy and Sell Stock
* Difficulty: Easy
* Platform: LeetCode

## Problem Statement

You are given an array `prices` where `prices[i]` represents the stock price on the `iᵗʰ` day.

Choose one day to buy a stock and a later day to sell it such that the profit is maximized. If no profit can be made, return `0`.

### Example

Input:
prices = [7,1,5,3,6,4]

Output:
5

Explanation:
Buy on day 2 at price `1` and sell on day 5 at price `6`.
Profit = `6 - 1 = 5`.

## Approach Used

I used a **Greedy Approach** by maintaining two variables:

1. **Minimum Price** seen so far.
2. **Maximum Profit** achievable at each step.

While traversing the array:

* Update the minimum buying price.
* Calculate the profit if the stock is sold on the current day.
* Update the maximum profit whenever a better profit is found.

This allows the solution to be computed in a single pass without checking every possible pair.

## Complexity Analysis

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Key Learning

* Greedy Algorithm
* One-pass array traversal
* Tracking minimum values
* Optimizing brute-force solutions
* Maximizing profit efficiently

## Status

✅ Accepted on LeetCode

## Language

C++
