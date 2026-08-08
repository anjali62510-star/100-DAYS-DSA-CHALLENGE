# Day 55 – Delete Node in a Linked List

## Problem Details

- **Problem Number:** 237
- **Problem Name:** Delete Node in a Linked List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given a node in a singly linked list, delete that node without having access to the head of the linked list.

The given node is guaranteed to be **not the last node**.

---

## Example 1

**Input:**

```text
4 → 5 → 1 → 9
```

Given node:

```text
5
```

**Output:**

```text
4 → 1 → 9
```

---

## Example 2

**Input:**

```text
4 → 5 → 1 → 9
```

Given node:

```text
1
```

**Output:**

```text
4 → 5 → 9
```

---

## Approach Used

Since we do not have access to the previous node, we cannot directly remove the given node using the usual linked-list deletion technique.

Instead, we use the following trick:

1. Copy the value of the next node into the current node.
2. Change the current node's `next` pointer to skip the next node.
3. This effectively removes the given node's original value from the list.

### Example

```text
Before:

4 → 5 → 1 → 9
    ↑
   node
```

Copy the next node's value:

```text
4 → 1 → 1 → 9
    ↑
   node
```

Skip the next node:

```text
4 → 1 → 9
```

---

## Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

## Key Learning

- Linked List Pointer Manipulation
- Deleting a Node Without Head Access
- Copying Node Values
- Updating `next` Pointers
- Constant-Time Linked List Operations

---

## Status

✅ Accepted on LeetCode

---

## Language

C++