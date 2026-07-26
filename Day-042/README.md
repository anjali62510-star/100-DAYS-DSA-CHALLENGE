# Day 42 – Middle of the Linked List

## Problem Details

- **Problem Number:** 876
- **Problem Name:** Middle of the Linked List
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the **second middle node**.

---

## Example 1

**Input:**

```text
1 → 2 → 3 → 4 → 5
```

**Output:**

```text
3 → 4 → 5
```

---

## Example 2

**Input:**

```text
1 → 2 → 3 → 4 → 5 → 6
```

**Output:**

```text
4 → 5 → 6
```

---

## Approach Used

I solved this problem using the **Fast & Slow Pointer (Tortoise and Hare)** technique.

### Algorithm

1. Initialize two pointers:
   - `slow = head`
   - `fast = head`
2. Traverse the linked list while:
   - `fast != NULL`
   - `fast->next != NULL`
3. Move:
   - `slow` one step forward.
   - `fast` two steps forward.
4. When the loop ends, `slow` points to the middle node.
5. For even-length linked lists, this automatically returns the **second middle node**, as required.

---

## Dry Run

Initial List:

```text
1 → 2 → 3 → 4 → 5 → NULL
```

| Iteration | Slow | Fast |
|-----------|------|------|
| Start | 1 | 1 |
| 1 | 2 | 3 |
| 2 | 3 | 5 |

Fast reaches the end.

Answer:

```text
3 → 4 → 5
```

---

### Even-Length Example

```text
1 → 2 → 3 → 4 → 5 → 6
```

| Iteration | Slow | Fast |
|-----------|------|------|
| Start | 1 | 1 |
| 1 | 2 | 3 |
| 2 | 3 | 5 |
| 3 | 4 | NULL |

Answer:

```text
4 → 5 → 6
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Fast & Slow Pointer Technique
- Single-pass Linked List Traversal
- Two-Pointer Strategy
- Finding the Middle Node Efficiently
- Foundation for Advanced Linked List Problems

---

## Status

✅ Accepted on LeetCode

---

## Language

C++