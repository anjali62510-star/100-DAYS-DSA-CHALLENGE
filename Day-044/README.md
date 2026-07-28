# Day 44 – Linked List Cycle

## Problem Details

- **Problem Number:** 141
- **Problem Name:** Linked List Cycle
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list, determine whether the linked list contains a cycle.

A cycle exists if a node in the linked list can be reached again by continuously following the `next` pointer.

Return `true` if a cycle exists; otherwise, return `false`.

---

## Example 1

**Input:**

```text
3 → 2 → 0 → -4
    ↑         ↓
    └─────────┘
```

**Output:**

```text
true
```

---

## Example 2

**Input:**

```text
1 → NULL
```

**Output:**

```text
false
```

---

## Approach Used

I solved this problem using **Floyd's Cycle Detection Algorithm (Tortoise and Hare Algorithm)**.

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
4. If `slow == fast`, a cycle exists.
5. If `fast` reaches `NULL`, no cycle exists.

---

## Dry Run

Initial List:

```text
3 → 2 → 0 → -4
    ↑         ↓
    └─────────┘
```

| Iteration | Slow | Fast |
|-----------|------|------|
| Start | 3 | 3 |
| 1 | 2 | 0 |
| 2 | 0 | 2 |
| 3 | -4 | -4 |

Both pointers meet.

Result:

```text
Cycle Detected ✅
```

---

### No Cycle Example

```text
1 → NULL
```

`fast` reaches `NULL`.

Result:

```text
No Cycle ❌
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Floyd's Cycle Detection Algorithm
- Fast & Slow Pointer Technique
- Linked List Traversal
- Constant Space Optimization
- Efficient Cycle Detection

---

## Status

✅ Accepted on LeetCode

---

## Language

C++