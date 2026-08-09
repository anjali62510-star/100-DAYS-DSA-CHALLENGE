# Day 56 – Valid Parentheses

## Problem Details

- **Problem Number:** 20
- **Problem Name:** Valid Parentheses
- **Difficulty:** Easy
- **Platform:** LeetCode
- **Topic:** Stack

---

## Problem Statement

Given a string `s` containing only the characters `()[]{}`, determine whether the input string is valid.

A string is valid when:

1. Every opening bracket has a matching closing bracket.
2. Brackets are closed in the correct order.
3. Every closing bracket has a corresponding opening bracket.

---

## Examples

### Example 1

**Input:**

```text
s = "()"
```

**Output:**

```text
true
```

### Example 2

**Input:**

```text
s = "()[]{}"
```

**Output:**

```text
true
```

### Example 3

**Input:**

```text
s = "([)]"
```

**Output:**

```text
false
```

---

## Approach Used

I used a **Stack** because brackets follow the **Last In, First Out (LIFO)** principle.

### Algorithm

1. Traverse the string character by character.
2. If the character is an opening bracket `(`, `{`, or `[`, push it onto the stack.
3. If it is a closing bracket:
   - Check whether the stack is empty.
   - Compare the closing bracket with the top of the stack.
   - If they do not match, return `false`.
   - Otherwise, pop the matching opening bracket.
4. After processing the complete string, return whether the stack is empty.

---

## Dry Run

For:

```text
s = "([])"
```

Processing:

```text
( → Push
[ → Push
] → Matches [
) → Matches (
```

The stack becomes empty.

Result:

```text
true
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

where `n` is the length of the string.

---

## Key Learning

- Stack Data Structure
- LIFO Principle
- Bracket Matching
- Nested Structures
- Efficient String Traversal

---

## Status

✅ Accepted on LeetCode

---

## Language

C++