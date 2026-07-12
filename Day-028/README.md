# Day 28 – Reverse Vowels of a String

## Problem Details
- **Problem Number:** 345
- **Problem Name:** Reverse Vowels of a String
- **Difficulty:** Easy
- **Platform:** LeetCode

## Problem Statement

Given a string `s`, reverse only the vowels in the string and return the resulting string.

The vowels are:
- a, e, i, o, u
- Both uppercase and lowercase vowels are considered.

### Example

**Input:**
s = "IceCreAm"

**Output:**
"AceCreIm"

**Explanation:**
The vowels `I, e, e, A` are reversed to `A, e, e, I`.

---

## Approach Used

I solved this problem using the **Two Pointer Technique**.

Two pointers are initialized:
- `left` starts from the beginning of the string.
- `right` starts from the end.

The algorithm works as follows:

1. Move the left pointer until it points to a vowel.
2. Move the right pointer until it points to a vowel.
3. Swap the vowels.
4. Continue moving both pointers inward until they meet.

A helper function is used to check whether a character is a vowel, considering both uppercase and lowercase letters.

This approach efficiently reverses only the vowels while keeping all other characters in their original positions.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- Two Pointer Technique
- String Traversal
- Character Classification
- In-place Swapping
- Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++