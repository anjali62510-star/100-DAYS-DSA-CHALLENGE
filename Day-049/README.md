# Day 49 – Swapping Nodes in a Linked List

## Problem Details

- **Problem Number:** 1721
- **Problem Name:** Swapping Nodes in a Linked List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a linked list and an integer `k`, swap the values of the **k-th node from the beginning** and the **k-th node from the end**, then return the modified linked list.

The solution should run efficiently in **O(n)** time using **O(1)** extra space.

---

## Example 1

**Input:**

```text
Head: 1 → 2 → 3 → 4 → 5
k = 2
```

**Output:**

```text
1 → 4 → 3 → 2 → 5
```

---

## Example 2

**Input:**

```text
Head: 7 → 9 → 6 → 6 → 7 → 8 → 3 → 0 → 9 → 5
k = 5
```

**Output:**

```text
7 → 9 → 6 → 6 → 8 → 7 → 3 → 0 → 9 → 5
```

---

## Approach Used

I solved this problem using the **Two-Pointer Technique**.

### Algorithm

1. Traverse to the **k-th node from the beginning** and store it as `first`.
2. Keep another pointer `second` at the head.
3. Continue moving a temporary pointer toward the end of the list.
4. Move `second` simultaneously until the temporary pointer reaches the last node.
5. At this point, `second` points to the **k-th node from the end**.
6. Swap the values of `first` and `second`.
7. Return the head.

Instead of swapping entire nodes, only the node values are exchanged, making the implementation simpler while preserving the linked list structure.

---

## Dry Run

Input:

```text
1 → 2 → 3 → 4 → 5
k = 2
```

Identify nodes:

```text
2nd from beginning = 2
2nd from end = 4
```

Swap values:

```text
1 → 4 → 3 → 2 → 5
```

Output:

```text
[1,4,3,2,5]
```

---

### Edge Case

Input:

```text
7 → 9 → 6 → 6 → 7 → 8 → 3 → 0 → 9 → 5
k = 5
```

Identify nodes:

```text
5th from beginning = 7
5th from end = 8
```

After swapping:

```text
7 → 9 → 6 → 6 → 8 → 7 → 3 → 0 → 9 → 5
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Two-Pointer Technique
- Finding the k-th Node from the End
- One-Pass Linked List Traversal
- Value Swapping Instead of Node Swapping
- Efficient Pointer Manipulation

---

## Status

✅ Accepted on LeetCode

---

## Language

C++