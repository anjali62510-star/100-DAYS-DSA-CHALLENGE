# Day 50 – Delete the Middle Node of a Linked List

## 🎯 Milestone

**50/100 Days Completed!** 🎉

Halfway through the **100 Days DSA Challenge**. This milestone reflects consistent daily problem-solving and continuous improvement in data structures and algorithms.

---

## Problem Details

- **Problem Number:** 2095
- **Problem Name:** Delete the Middle Node of a Linked List
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list, delete its middle node and return the head of the modified list.

The middle node is defined as the ⌊n / 2⌋th node using **0-based indexing**.

---

## Example 1

**Input:**

```text
Head: 1 → 3 → 4 → 7 → 1 → 2 → 6
```

**Output:**

```text
1 → 3 → 4 → 1 → 2 → 6
```

---

## Example 2

**Input:**

```text
Head: 1 → 2 → 3 → 4
```

**Output:**

```text
1 → 2 → 4
```

---

## Example 3

**Input:**

```text
Head: 2 → 1
```

**Output:**

```text
2
```

---

## Approach Used

I solved this problem using the **Fast & Slow Pointer Technique**.

### Algorithm

1. Handle the edge case where the list contains only one node.
2. Initialize:
   - `slow = head`
   - `fast = head`
   - `prev = nullptr`
3. Traverse the list:
   - Move `fast` two steps.
   - Move `slow` one step.
   - Update `prev` to track the node before `slow`.
4. When `fast` reaches the end:
   - `slow` points to the middle node.
5. Delete the middle node by updating:

```cpp
prev->next = slow->next;
```

6. Return the modified linked list.

This approach deletes the middle node in a single traversal while using constant extra space.

---

## Dry Run

Input:

```text
1 → 3 → 4 → 7 → 1 → 2 → 6
```

Middle node:

```text
7
```

After deletion:

```text
1 → 3 → 4 → 1 → 2 → 6
```

Output:

```text
[1,3,4,1,2,6]
```

---

### Edge Case

Input:

```text
2 → 1
```

Middle node:

```text
1
```

After deletion:

```text
2
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes.

---

## Key Learning

- Fast & Slow Pointer Technique
- Finding the Middle Node
- Maintaining Previous Pointer
- Linked List Node Deletion
- In-place Linked List Modification

---

## Status

✅ Accepted on LeetCode

---

## Language

C++

---

## Challenge Progress

- ✅ Days Completed: **50 / 100**
- ✅ Total Problems Solved: **50**
- 🎯 Milestone Achieved: **Halfway to 100 Days**