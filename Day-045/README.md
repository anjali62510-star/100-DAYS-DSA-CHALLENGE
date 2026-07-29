# Day 45 – Palindrome Linked List

## Problem Details

- **Problem Number:** 234
- **Problem Name:** Palindrome Linked List
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given the head of a singly linked list, determine whether it is a palindrome.

Return `true` if the linked list reads the same forward and backward; otherwise, return `false`.

**Follow-up:** Solve the problem in **O(n)** time and **O(1)** extra space.

---

## Example 1

**Input:**

```text
1 → 2 → 2 → 1
```

**Output:**

```text
true
```

---

## Example 2

**Input:**

```text
1 → 2
```

**Output:**

```text
false
```

---

## Approach Used

I solved this problem using the **Fast & Slow Pointer Technique** along with **in-place reversal of the second half** of the linked list.

### Algorithm

1. Handle edge cases for empty and single-node lists.
2. Find the middle of the linked list using **slow** and **fast** pointers.
3. Reverse the second half of the linked list.
4. Compare the first half with the reversed second half node by node.
5. If every corresponding node matches, return `true`; otherwise, return `false`.

---

## Dry Run

Input:

```text
1 → 2 → 2 → 1
```

Find Middle:

```text
1 → 2 | 2 → 1
```

Reverse Second Half:

```text
1 → 2 | 1 → 2
```

Comparison:

| First Half | Second Half |
|------------|-------------|
| 1 | 1 ✅ |
| 2 | 2 ✅ |

Result:

```text
Palindrome ✅
```

---

### Non-Palindrome Example

```text
1 → 2
```

Comparison:

```text
1 ≠ 2
```

Result:

```text
Not a Palindrome ❌
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the number of nodes in the linked list.

---

## Key Learning

- Fast & Slow Pointer Technique
- Linked List Reversal
- In-place Comparison
- Two-Pointer Strategy
- Optimized Palindrome Checking

---

## Status

✅ Accepted on LeetCode

---

## Language

C++