# Day 41 – Reverse Linked List

## Problem Details

- **Problem Number:** 206
- **Problem Name:** Reverse Linked List
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list, reverse the list and return the new head.

The reversal must be performed by changing the links between nodes.

---

## Example

**Input:**

```text
1 → 2 → 3 → 4 → 5
```

**Output:**

```text
5 → 4 → 3 → 2 → 1
```

---

## Approach Used

I solved this problem using the **Iterative Three-Pointer Technique**.

### Algorithm

1. Initialize three pointers:
   - `prev = NULL`
   - `curr = head`
   - `nextNode`
2. Traverse the linked list until `curr` becomes `NULL`.
3. Store the next node using `nextNode = curr->next`.
4. Reverse the current node's link:
   - `curr->next = prev`
5. Move both pointers one step forward:
   - `prev = curr`
   - `curr = nextNode`
6. When traversal ends, `prev` points to the new head of the reversed list.

---

## Dry Run

Original List:

```text
1 → 2 → 3 → 4 → 5 → NULL
```

Iteration 1:

```text
1 → NULL
```

Iteration 2:

```text
2 → 1 → NULL
```

Iteration 3:

```text
3 → 2 → 1 → NULL
```

Iteration 4:

```text
4 → 3 → 2 → 1 → NULL
```

Iteration 5:

```text
5 → 4 → 3 → 2 → 1 → NULL
```

Final Answer:

```text
5 → 4 → 3 → 2 → 1 → NULL
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Linked List Traversal
- Pointer Manipulation
- Three-Pointer Technique
- In-place Reversal
- Iterative Linked List Operations

---

## Status

✅ Accepted on LeetCode

---

## Language

C++