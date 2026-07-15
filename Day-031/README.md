# Day 31 – Remove All Adjacent Duplicates In String

## Problem Details

- **Problem Number:** 1047
- **Problem Name:** Remove All Adjacent Duplicates In String
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given a string `s` consisting of lowercase English letters, repeatedly remove pairs of adjacent duplicate characters until no more duplicate pairs remain.

Return the final string after all duplicate removals.

It can be proven that the answer is unique.

### Example

**Input:**

s = "abbaca"

**Output:**

"ca"

**Explanation:**

- Remove `"bb"` → `"aaca"`
- Remove `"aa"` → `"ca"`

Final string: `"ca"`

---

## Approach Used

I solved this problem using a **Stack**.

The algorithm works as follows:

1. Traverse the string character by character.
2. If the stack is not empty and the current character matches the top of the stack:
   - Pop the top element (remove the adjacent duplicate).
3. Otherwise:
   - Push the current character onto the stack.
4. After processing the entire string, the stack contains the final characters.
5. Since stack elements are retrieved in reverse order, reverse the constructed string before returning it.

Using a stack naturally simulates the repeated removal of adjacent duplicate characters in a single traversal.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## Key Learning

- Stack Data Structure
- String Traversal
- Adjacent Duplicate Removal
- LIFO (Last In, First Out)
- Efficient Single Pass Algorithm

---

## Status

✅ Accepted on LeetCode

---

## Language

C++