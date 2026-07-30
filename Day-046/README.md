# Day 46 – Remove Linked List Elements

## Problem Details

- **Problem Number:** 203
- **Problem Name:** Remove Linked List Elements
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a linked list and an integer `val`, remove all the nodes whose value is equal to `val` and return the new head of the linked list.

---

## Example 1

**Input:**

```text
Head: 1 → 2 → 6 → 3 → 4 → 5 → 6
val = 6
```

**Output:**

```text
1 → 2 → 3 → 4 → 5
```

---

## Example 2

**Input:**

```text
Head: []
val = 1
```

**Output:**

```text
[]
```

---

## Example 3

**Input:**

```text
Head: 7 → 7 → 7 → 7
val = 7
```

**Output:**

```text
[]
```

---

## Approach Used

I solved this problem using the **Dummy Node Technique** with iterative traversal.

### Algorithm

1. Create a dummy node and point it to the head of the linked list.
2. Initialize a pointer `curr` to the dummy node.
3. Traverse the linked list while `curr->next` is not `NULL`.
4. If the next node contains the target value:
   - Skip that node by updating `curr->next`.
5. Otherwise:
   - Move `curr` to the next node.
6. Return `dummy->next` as the new head of the updated linked list.

Using a dummy node simplifies deletion when the head node itself needs to be removed.

---

## Dry Run

Input:

```text
1 → 2 → 6 → 3 → 4 → 5 → 6
val = 6
```

Traversal:

```text
1 → 2 → 6 → 3 → 4 → 5 → 6
          ✖                 ✖
```

After deletion:

```text
1 → 2 → 3 → 4 → 5
```

---

### Edge Case

Input:

```text
7 → 7 → 7 → 7
val = 7
```

After deletion:

```text
[]
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Dummy Node Technique
- Linked List Traversal
- Pointer Manipulation
- Safe Node Deletion
- Handling Head Node Removal Efficiently

---

## Status

✅ Accepted on LeetCode

---

## Language

C++