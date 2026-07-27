# Day 43 – Merge Two Sorted Lists

## Problem Details

- **Problem Number:** 21
- **Problem Name:** Merge Two Sorted Lists
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one sorted linked list by splicing together the nodes of the two lists.

Return the head of the merged linked list.

---

## Example

**Input:**

```text
list1: 1 → 2 → 4
list2: 1 → 3 → 4
```

**Output:**

```text
1 → 1 → 2 → 3 → 4 → 4
```

---

## Approach Used

I solved this problem using the **Iterative Dummy Node Technique**.

### Algorithm

1. Create a dummy node to act as the starting point of the merged list.
2. Maintain a pointer `tail` pointing to the last node of the merged list.
3. Compare the current nodes of `list1` and `list2`.
4. Attach the smaller node to `tail`.
5. Move the corresponding list pointer forward.
6. Move `tail` to the newly added node.
7. Repeat until one list becomes empty.
8. Attach the remaining nodes of the other list.
9. Return `dummy.next` as the head of the merged list.

---

## Dry Run

Initial Lists:

```text
list1: 1 → 2 → 4
list2: 1 → 3 → 4
```

Comparison Steps:

```text
1 → 1 → 2 → 3 → 4 → 4
```

Merged List:

```text
1 → 1 → 2 → 3 → 4 → 4
```

---

## Complexity Analysis

- **Time Complexity:** O(m + n)
- **Space Complexity:** O(1)

where:
- `m` = number of nodes in `list1`
- `n` = number of nodes in `list2`

---

## Key Learning

- Dummy Node Technique
- Two Pointer Traversal
- Merging Sorted Linked Lists
- In-place Linked List Manipulation
- Efficient Iterative Approach

---

## Status

✅ Accepted on LeetCode

---

## Language

C++