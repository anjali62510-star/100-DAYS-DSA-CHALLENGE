# Day 30 – Valid Palindrome

## Problem Details

- **Problem Number:** 125
- **Problem Name:** Valid Palindrome
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given a string `s`, determine whether it is a palindrome after:

- Converting all uppercase letters to lowercase.
- Removing all non-alphanumeric characters.

Return `true` if the processed string is a palindrome; otherwise, return `false`.

### Example

**Input:**

s = "A man, a plan, a canal: Panama"

**Output:**

true

**Explanation:**

After removing spaces, punctuation, and converting to lowercase:

`"amanaplanacanalpanama"`

which reads the same forward and backward.

---

## Approach Used

I solved this problem using the **Two Pointer Technique**.

The algorithm works as follows:

1. Initialize two pointers:
   - `left` at the beginning.
   - `right` at the end.
2. Skip characters that are not letters or digits using `isalnum()`.
3. Convert both characters to lowercase using `tolower()`.
4. Compare the characters.
5. If they differ, return `false`.
6. Otherwise, move both pointers inward and continue.
7. If all valid characters match, return `true`.

This approach avoids creating a new filtered string and performs all operations in-place.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning

- Two Pointer Technique
- String Traversal
- Character Filtering (`isalnum`)
- Case-Insensitive Comparison (`tolower`)
- In-place String Processing
- Constant Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++