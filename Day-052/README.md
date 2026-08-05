# Day 52 – Add Two Numbers

## Problem Details

- **Problem Number:** 2
- **Problem Name:** Add Two Numbers
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, where each node contains a single digit.

Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain leading zeros except for the number 0 itself.

---

## Example 1

**Input:**

```text
l1 = 2 → 4 → 3
l2 = 5 → 6 → 4
```

**Output:**

```text
7 → 0 → 8
```

**Explanation:**

342 + 465 = 807

---

## Example 2

**Input:**

```text
l1 = 0
l2 = 0
```

**Output:**

```text
0
```

---

## Example 3

**Input:**

```text
l1 = 9 → 9 → 9 → 9 → 9 → 9 → 9
l2 = 9 → 9 → 9 → 9
```

**Output:**

```text
8 → 9 → 9 → 9 → 0 → 0 → 0 → 1
```

---

## Approach Used

I solved this problem using **Linked List Traversal**, **Carry Propagation**, and a **Dummy Node**.

### Algorithm

1. Create a dummy node to build the result linked list.
2. Initialize a `carry` variable to `0`.
3. Traverse both linked lists simultaneously.
4. At each step:
   - Add the current digits from both linked lists (if available).
   - Add the previous carry.
   - Create a new node with `sum % 10`.
   - Update `carry = sum / 10`.
5. Continue until both linked lists are exhausted and there is no remaining carry.
6. Return the linked list starting after the dummy node.

This approach efficiently simulates manual addition while correctly handling different list lengths and carry values.

---

## Dry Run

Input:

```text
l1 = 2 → 4 → 3
l2 = 5 → 6 → 4
```

Calculation:

```text
2 + 5 = 7
4 + 6 = 10 → Write 0, Carry 1
3 + 4 + 1 = 8
```

Output:

```text
7 → 0 → 8
```

---

### Edge Case

Input:

```text
l1 = 9 → 9 → 9
l2 = 1
```

Calculation:

```text
9 + 1 = 10
Carry propagates through all digits.
```

Output:

```text
0 → 0 → 0 → 1
```

---

## Complexity Analysis

- **Time Complexity:** O(max(m, n))
- **Space Complexity:** O(max(m, n))

where `m` and `n` are the lengths of the two linked lists.

---

## Key Learning

- Linked List Traversal
- Carry Propagation
- Dummy Node Pattern
- Simulation of Manual Addition
- Building a Result Linked List
- Handling Different Linked List Lengths

---

## Status

✅ Accepted on LeetCode

---

## Language

C++