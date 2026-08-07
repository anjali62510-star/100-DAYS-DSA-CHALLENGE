# Day 54 – Remove Duplicates from Sorted List II

## Problem Details

- **Problem Number:** 82
- **Problem Name:** Remove Duplicates from Sorted List II
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a **sorted** linked list, delete **all nodes that have duplicate numbers**, leaving only distinct numbers from the original list. Return the resulting linked list in sorted order.

Unlike the simpler version of this problem, every occurrence of a duplicated value must be removed.

---

## Example 1

**Input:**

```text
Head: 1 → 2 → 3 → 3 → 4 → 4 → 5
```

**Output:**

```text
1 → 2 → 5
```

---

## Example 2

**Input:**

```text
Head: 1 → 1 → 1 → 2 → 3
```

**Output:**

```text
2 → 3
```

---

## Approach Used

I solved this problem using the **Dummy Node + Two Pointers** technique.

### Algorithm

1. Create a dummy node pointing to the head of the list.
2. Initialize a pointer `prev` to the dummy node.
3. Traverse the linked list using `head`.
4. If the current node has duplicate values:
   - Store the duplicate value.
   - Skip every node containing that value.
   - Connect `prev->next` to the first non-duplicate node.
5. Otherwise:
   - Move both `prev` and `head` one step forward.
6. Return `dummy->next`.

Using a dummy node simplifies handling cases where duplicate values appear at the beginning of the linked list.

---

## Dry Run

Input:

```text
Head: 1 → 2 → 3 → 3 → 4 → 4 → 5
```

Duplicate values:

```text
3, 4
```

After removal:

```text
1 → 2 → 5
```

---

### Edge Case

Input:

```text
Head: 1 → 1 → 1 → 2 → 3
```

After removing duplicates:

```text
2 → 3
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Dummy Node Pattern
- Two-Pointer Technique
- Removing Consecutive Duplicates
- Pointer Manipulation
- Handling Edge Cases
- Sorted Linked List Traversal

---

## Status

✅ Accepted on LeetCode

---

## Language

C++