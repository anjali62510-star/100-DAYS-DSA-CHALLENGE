# Day 48 – Odd Even Linked List

## Problem Details

- **Problem Number:** 328
- **Problem Name:** Odd Even Linked List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list, group all the nodes with **odd indices** together followed by the nodes with **even indices**, while preserving the relative order within both groups.

The solution must run in **O(n)** time and use **O(1)** extra space.

---

## Example 1

**Input:**

```text
Head: 1 → 2 → 3 → 4 → 5
```

**Output:**

```text
1 → 3 → 5 → 2 → 4
```

---

## Example 2

**Input:**

```text
Head: 2 → 1 → 3 → 5 → 6 → 4 → 7
```

**Output:**

```text
2 → 3 → 6 → 7 → 1 → 5 → 4
```

---

## Approach Used

I solved this problem using the **Two-Pointer Technique** by maintaining separate chains for odd-indexed and even-indexed nodes.

### Algorithm

1. Handle edge cases:
   - Empty list
   - Single-node list
2. Initialize:
   - `odd = head`
   - `even = head->next`
   - `evenHead = even`
3. Traverse the linked list while both `even` and `even->next` exist:
   - Link odd nodes together.
   - Link even nodes together.
4. Attach the even list after the odd list.
5. Return the modified head.

This approach rearranges the list **in-place** without creating any additional linked lists.

---

## Dry Run

Input:

```text
1 → 2 → 3 → 4 → 5
```

Odd chain:

```text
1 → 3 → 5
```

Even chain:

```text
2 → 4
```

Combine both chains:

```text
1 → 3 → 5 → 2 → 4
```

Output:

```text
[1,3,5,2,4]
```

---

### Edge Case

Input:

```text
2 → 1 → 3 → 5 → 6 → 4 → 7
```

Odd chain:

```text
2 → 3 → 6 → 7
```

Even chain:

```text
1 → 5 → 4
```

Final list:

```text
2 → 3 → 6 → 7 → 1 → 5 → 4
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Two-Pointer Technique
- Odd-Even Pointer Manipulation
- In-place Linked List Rearrangement
- Maintaining Relative Order
- Constant Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++