# Day 67 – LeetCode #112: Path Sum

## Problem

**LeetCode #112 – Path Sum**

**Difficulty:** Easy

## Approach Used: Recursion + Binary Tree Traversal

The objective was to determine whether a binary tree contains a **root-to-leaf path** whose node values add up to the given `targetSum`.

A **leaf node** is a node that has no left or right child.

### Steps:

* Start from the root node.
* If the tree is empty, return `false`.
* Subtract the current node's value from `targetSum`.
* Check if the current node is a leaf node.
* If it is a leaf, check whether the remaining `targetSum` is `0`.
* If it is not a leaf, recursively check the left and right subtrees.
* If either subtree contains a valid path, return `true`.
* If no valid path is found, return `false`.

### Example 1

📌 **Input:**

`root = [5,4,8,11,null,13,4,7,2,null,null,null,1]`

`targetSum = 22`

📌 **Output:**

`true` ✅

A valid root-to-leaf path is:

`5 → 4 → 11 → 2`

`5 + 4 + 11 + 2 = 22`

### Example 2

📌 **Input:**

`root = [1,2,3]`

`targetSum = 5`

📌 **Output:**

`false` ❌

The possible root-to-leaf paths are:

`1 → 2 = 3`

`1 → 3 = 4`

Neither path has a sum of `5`.

The key learning from today's problem was understanding how **Recursion can be used to traverse a Binary Tree** and how we can keep track of the remaining target sum while exploring different root-to-leaf paths.

## Complexity

✅ **Time Complexity:** O(n)

✅ **Space Complexity:** O(h), where `h` is the height of the tree.

🎯 **67 days completed!** Another step forward in the 100 Days DSA Challenge. Today's problem strengthened my understanding of **Binary Trees, Recursion, Tree Traversal, Root-to-Leaf Paths, and Path Sum**.

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🌳🔥

---

*"Consistency beats intensity."*
