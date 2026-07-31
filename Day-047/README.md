# Day 47 – Rotate List

## Problem Details

- **Problem Number:** 61
- **Problem Name:** Rotate List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a linked list, rotate the list to the right by **k** places and return the updated head.

---

## Example 1

**Input:**

```text
Head: 1 → 2 → 3 → 4 → 5
k = 2
```

**Output:**

```text
4 → 5 → 1 → 2 → 3
```

---

## Example 2

**Input:**

```text
Head: 0 → 1 → 2
k = 4
```

**Output:**

```text
2 → 0 → 1
```

---

## Approach Used

I solved this problem using the **Circular Linked List Technique** along with **Modulo Optimization**.

### Algorithm

1. Handle edge cases:
   - Empty list
   - Single-node list
   - `k = 0`
2. Traverse the linked list to find:
   - The total number of nodes (`length`)
   - The last node (`tail`)
3. Compute the effective rotations:
   ```cpp
   k = k % length;
   ```
4. If `k == 0`, return the original list.
5. Connect the last node to the head to form a circular linked list.
6. Move `length - k - 1` steps to locate the new tail.
7. Set:
   - `newHead = newTail->next`
   - `newTail->next = nullptr`
8. Return the new head.

---

## Dry Run

Input:

```text
1 → 2 → 3 → 4 → 5
k = 2
```

Length = **5**

Effective rotations:

```text
k = 2 % 5 = 2
```

Create a circular list:

```text
1 → 2 → 3 → 4 → 5
↑                 ↓
└─────────────────┘
```

Locate the new tail (node `3`) and break the circle:

```text
4 → 5 → 1 → 2 → 3
```

Output:

```text
[4,5,1,2,3]
```

---

### Edge Case

Input:

```text
0 → 1 → 2
k = 4
```

Length = **3**

Effective rotations:

```text
k = 4 % 3 = 1
```

Output:

```text
2 → 0 → 1
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Circular Linked List Technique
- Modulo Optimization
- Pointer Manipulation
- Finding New Head and Tail
- Efficient Linked List Rotation

---

## Status

✅ Accepted on LeetCode

---

## Language

C++