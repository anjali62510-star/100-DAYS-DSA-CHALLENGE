# Day 51 – Remove Nth Node From End of List

## Problem Details

- **Problem Number:** 19
- **Problem Name:** Remove Nth Node From End of List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list and an integer `n`, remove the **n-th node from the end** of the list and return the modified head.

The follow-up asks for a solution that completes the task in **one traversal**.

---

## Example 1

**Input:**

```text
Head: 1 → 2 → 3 → 4 → 5
n = 2
```

**Output:**

```text
1 → 2 → 3 → 5
```

---

## Example 2

**Input:**

```text
Head: 1
n = 1
```

**Output:**

```text
[]
```

---

## Example 3

**Input:**

```text
Head: 1 → 2
n = 1
```

**Output:**

```text
1
```

---

## Approach Used

I solved this problem using the **Two-Pointer Technique** along with a **Dummy Node**.

### Algorithm

1. Create a dummy node that points to the head.
2. Initialize two pointers, `fast` and `slow`, at the dummy node.
3. Move the `fast` pointer `n + 1` steps ahead.
4. Move both pointers simultaneously until `fast` reaches the end of the list.
5. At this point, `slow` is positioned just before the node to be removed.
6. Update the links to skip the target node.
7. Delete the removed node and return the new head.

Using a dummy node makes it easy to handle edge cases, such as deleting the head node.

---

## Dry Run

Input:

```text
1 → 2 → 3 → 4 → 5
n = 2
```

Pointer positions after traversal:

```text
slow → 3
Node to delete → 4
```

After deletion:

```text
1 → 2 → 3 → 5
```

Output:

```text
[1,2,3,5]
```

---

### Edge Case

Input:

```text
1
n = 1
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

- Two-Pointer Technique
- Dummy Node Pattern
- One-Pass Linked List Traversal
- Removing the N-th Node from the End
- Efficient Pointer Manipulation
- Handling Linked List Edge Cases

---

## Status

✅ Accepted on LeetCode

---

## Language

C++s