# Day 58 – Min Stack

## Problem Details

- **Problem Number:** 155
- **Problem Name:** Min Stack
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Topic:** Stack

---

## Problem Statement

Design a stack that supports the following operations in **O(1)** time:

- `push(value)` – Push an element onto the stack.
- `pop()` – Remove the top element.
- `top()` – Return the top element.
- `getMin()` – Return the minimum element in the stack.

---

## Approach Used

I used **two stacks**:

### 1. Main Stack

The `st` stack stores all the values normally.

### 2. Minimum Stack

The `minSt` stack keeps track of the minimum value currently present in the main stack.

Whenever a value is pushed:

- Push it into `st`.
- If `minSt` is empty or the value is smaller than or equal to the current minimum, push it into `minSt`.

Whenever a value is popped:

- If it is equal to the current minimum, remove it from `minSt`.
- Then remove it from `st`.

This allows `getMin()` to return the minimum directly from the top of `minSt`.

---

## Example

Operations:

```text
push(-2)
push(0)
push(-3)
getMin()
```

Result:

```text
-3
```

After:

```text
pop()
top()
getMin()
```

Results:

```text
0
-2
```

---

## Complexity Analysis

| Operation | Time |
|-----------|------|
| `push()` | O(1) |
| `pop()` | O(1) |
| `top()` | O(1) |
| `getMin()` | O(1) |

**Space Complexity:** O(n)

---

## Key Learning

- Stack Data Structure
- Auxiliary Stack
- Maintaining Minimum Values
- Constant-Time Operations
- Efficient Data Structure Design

---

## Status

✅ Accepted on LeetCode

## Language

C++