# Day 53 – Partition List

## Problem Details

- **Problem Number:** 86
- **Problem Name:** Partition List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a linked list and an integer `x`, partition the list such that all nodes with values **less than `x`** come before nodes with values **greater than or equal to `x`**.

The relative order of nodes in each partition should remain the same as in the original list.

---

## Example 1

**Input:**

```text
Head: 1 → 4 → 3 → 2 → 5 → 2
x = 3
```

**Output:**

```text
1 → 2 → 2 → 4 → 3 → 5
```

---

## Example 2

**Input:**

```text
Head: 2 → 1
x = 2
```

**Output:**

```text
1 → 2
```

---

## Approach Used

I solved this problem using **Two Dummy Linked Lists**.

### Algorithm

1. Create two dummy nodes:
   - One for nodes with values less than `x`.
   - One for nodes with values greater than or equal to `x`.
2. Traverse the original linked list.
3. Append each node to the appropriate list:
   - If `node->val < x`, append it to the **less** list.
   - Otherwise, append it to the **greater** list.
4. Set the last node of the greater list to `nullptr`.
5. Connect the less list with the greater list.
6. Return the head of the combined list.

This approach preserves the original relative ordering of nodes while requiring only one traversal.

---

## Dry Run

Input:

```text
Head: 1 → 4 → 3 → 2 → 5 → 2
x = 3
```

Less List:

```text
1 → 2 → 2
```

Greater List:

```text
4 → 3 → 5
```

Final List:

```text
1 → 2 → 2 → 4 → 3 → 5
```

---

### Edge Case

Input:

```text
Head: 2 → 1
x = 2
```

Less List:

```text
1
```

Greater List:

```text
2
```

Output:

```text
1 → 2
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Linked List Partitioning
- Dummy Node Pattern
- Stable Partition
- Pointer Manipulation
- Single-Pass Linked List Traversal
- Preserving Relative Order

---

## Status

✅ Accepted on LeetCode

---

## Language

C++