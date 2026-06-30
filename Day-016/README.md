# Day 16 – Majority Element

## Problem Details

* **Problem Number:** 169
* **Problem Name:** Majority Element
* **Difficulty:** Easy
* **Platform:** LeetCode

## Problem Statement

Given an integer array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `⌊n/2⌋` times. It is guaranteed that the majority element always exists.

### Example

**Input:**
nums = [2,2,1,1,1,2,2]

**Output:**
2

**Explanation:**
The element `2` appears 4 times, which is more than `⌊7/2⌋ = 3`.

## Approach Used

I solved this problem using the **Boyer-Moore Voting Algorithm**, which efficiently finds the majority element without using extra memory.

The algorithm maintains:

* A **candidate** for the majority element.
* A **count** representing its current vote balance.

If the count becomes zero, the current element becomes the new candidate. Matching elements increase the count, while different elements decrease it. Since the majority element appears more than half the time, it will always remain as the final candidate.

## Complexity Analysis

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Key Learning

* Boyer-Moore Voting Algorithm
* Candidate selection and vote cancellation
* Space optimization
* Linear array traversal
* Solving frequency-based problems without extra memory

## Status

✅ Accepted on LeetCode

## Language

C++
