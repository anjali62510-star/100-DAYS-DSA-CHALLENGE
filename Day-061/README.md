# Day 61 – Minimum Remove to Make Valid Parentheses

## Problem Details

- **Problem Number:** 1249
- **Problem Name:** Minimum Remove to Make Valid Parentheses
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Topic:** Stack
- **Language:** C++

## Approach

I used a **stack** to store the indices of unmatched opening parentheses `(`.

- If the character is `(`, push its index.
- If the character is `)`:
  - If the stack is not empty, pop the matching `(`.
  - Otherwise, mark `)` for removal.
- After traversing the string, any indices remaining in the stack represent unmatched `(`.
- Remove all marked characters and return the resulting string.

## Example

Input:

```text
a)b(c)d
```

Output:

```text
ab(c)d
```

## Complexity

- **Time:** O(n)
- **Space:** O(n)

## Key Learning

- Stack
- Parentheses matching
- Handling unmatched brackets
- String manipulation

## Status

✅ Accepted on LeetCode

## Language

C++