# Day 27 – Number of Segments in a String

## Problem Details
- **Problem Number:** 434
- **Problem Name:** Number of Segments in a String
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement

Given a string `s`, return the number of segments in the string.

A segment is defined as a contiguous sequence of non-space characters.

### Example

**Input:**
s = "Hello, my name is John"

**Output:**
5

**Explanation:**
The five segments are:
- Hello,
- my
- name
- is
- John

---

## Approach Used

I solved this problem using a **Single Pass String Traversal**.

The idea is to identify the **start of each new segment** while traversing the string.

A new segment begins when:
- The current character is **not a space**, and
- It is either:
  - the first character of the string, or
  - the previous character is a space.

Each time this condition is satisfied, the segment count is incremented.

This approach avoids splitting the string into multiple substrings and efficiently counts the number of segments in a single traversal.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- String Traversal
- Detecting Word Boundaries
- Single Pass Algorithm
- Efficient Counting
- Constant Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++