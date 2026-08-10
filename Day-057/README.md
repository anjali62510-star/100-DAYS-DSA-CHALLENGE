# Day 57 – Implement Queue using Stacks

## Problem Details

- **Problem Number:** 232
- **Problem Name:** Implement Queue using Stacks
- **Difficulty:** Easy
- **Platform:** LeetCode
- **Topic:** Stack, Queue

---

## Problem Statement

Implement a **FIFO Queue** using only two stacks.

The queue should support:

- `push(x)` – Adds an element to the back.
- `pop()` – Removes and returns the front element.
- `peek()` – Returns the front element.
- `empty()` – Checks whether the queue is empty.

---

## Approach Used

I used **two stacks**:

- `input` – stores newly inserted elements.
- `output` – provides elements in queue order.

A stack follows **LIFO**, while a queue follows **FIFO**.

When `output` is empty, all elements from `input` are transferred to `output`. This reverses their order and places the oldest element on top.

---

## Example

Operations:

```text
push(1)
push(2)
push(3)
```

Queue:

```text
1 → 2 → 3
```

After transferring elements:

```text
output stack:

1
2
3
```

Therefore:

```text
peek() → 1
pop()  → 1
pop()  → 2
```

---

## Algorithm

### Push

Push the element directly into the `input` stack.

### Pop

If `output` is empty:

1. Move all elements from `input` to `output`.
2. Remove the top element from `output`.

### Peek

If `output` is empty, transfer all elements from `input` to `output`.

Return the top of `output`.

### Empty

The queue is empty only when both stacks are empty.

---

## Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| `push()` | O(1) |
| `pop()` | Amortized O(1) |
| `peek()` | Amortized O(1) |
| `empty()` | O(1) |

**Space Complexity:** O(n)

---

## Key Learning

- Stack vs Queue
- LIFO and FIFO
- Two-Stack Technique
- Amortized Complexity
- Data Structure Implementation

---

## Status

✅ Accepted on LeetCode

## Language

C++