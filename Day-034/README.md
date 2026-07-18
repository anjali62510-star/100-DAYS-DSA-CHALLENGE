# Day 34 – Reverse Words in a String

## Problem Details

- **Problem Number:** 151
- **Problem Name:** Reverse Words in a String
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given a string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The returned string should:

- Contain words in reverse order.
- Have only a single space between words.
- Not contain leading or trailing spaces.

### Example

**Input:**

s = "the sky is blue"

**Output:**

"blue is sky the"

---

## Approach Used

I solved this problem using a **Stack**.

### Algorithm

1. Traverse the string character by character.
2. Extract each word while ignoring extra spaces.
3. Push every complete word onto a stack.
4. Pop the words one by one to construct the final string.
5. Insert a single space between words while building the answer.

### Why It Works

A stack follows the **Last In, First Out (LIFO)** principle.

For example:

```text
Input:
the sky is blue

Stack (bottom → top):
the
sky
is
blue

Pop Order:
blue
is
sky
the
```

Thus, popping all words from the stack naturally reverses their order.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

where `n` is the length of the input string.

---

## Key Learning

- Stack Data Structure
- String Parsing
- Word Extraction
- Handling Multiple Spaces
- LIFO (Last In, First Out)
- Efficient String Manipulation

---

## Status

✅ Accepted on LeetCode

---

## Language

C++