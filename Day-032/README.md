# Day 32 – Rotate String

## Problem Details

- **Problem Number:** 796
- **Problem Name:** Rotate String
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given two strings `s` and `goal`, determine whether `s` can become `goal` after performing any number of left rotations.

A single rotation moves the leftmost character of the string to the rightmost position.

Return `true` if `goal` is a rotation of `s`; otherwise, return `false`.

### Example

**Input:**

s = "abcde"  
goal = "cdeab"

**Output:**

true

**Explanation:**

After two left rotations:

- `"abcde"` → `"bcdea"`
- `"bcdea"` → `"cdeab"`

The strings become equal.

---

## Approach Used

I solved this problem using **String Concatenation + Substring Search**.

### Algorithm

1. If the lengths of `s` and `goal` are different, return `false`.
2. Concatenate the string with itself:
   ```cpp
   string temp = s + s;
   ```
3. Check whether `goal` exists as a substring of `temp`.
4. If found, return `true`; otherwise, return `false`.

### Why It Works

Every possible rotation of a string appears as a substring inside `s + s`.

For example:

```text
s = "abcde"

s + s = "abcdeabcde"

Rotations:
abcde
bcdea
cdeab
deabc
eabcd
```

Since `"cdeab"` exists inside `"abcdeabcde"`, it is a valid rotation.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## Key Learning

- String Concatenation
- Substring Search
- Rotation Property of Strings
- Pattern Recognition
- Efficient String Manipulation

---

## Status

✅ Accepted on LeetCode

---

## Language

C++