# Day 68 – LeetCode #111: Minimum Depth of Binary Tree

## Problem

**LeetCode #111 – Minimum Depth of Binary Tree**

**Difficulty:** Easy

## Approach Used: Recursion + Binary Tree Traversal

The objective was to find the **minimum depth of a binary tree**.

The minimum depth is the number of nodes along the **shortest path from the root node to the nearest leaf node**.

A **leaf node** is a node that has no left or right child.

### Steps:

* Start from the root node.
* If the tree is empty, return `0`.
* If the left child is `NULL`, find the minimum depth of the right subtree.
* If the right child is `NULL`, find the minimum depth of the left subtree.
* If both children exist, recursively find the minimum depth of both subtrees.
* Take the smaller of the two depths.
* Add `1` for the current node.

### Example 1

📌 **Input:**

`root = [3,9,20,null,null,15,7]`

📌 **Output:**

`2` ✅

The shortest path is:

`3 → 9`

So the minimum depth is `2`.

### Example 2

📌 **Input:**

`root = [2,null,3,null,4,null,5,null,6]`

📌 **Output:**

`5` ✅

There is only one path from the root to the leaf:

`2 → 3 → 4 → 5 → 6`

Therefore, the minimum depth is `5`.

The key learning from today's problem was understanding how **Recursion can be used to find the shortest root-to-leaf path in a Binary Tree**. I also learned why we need to handle cases where one child is `NULL` carefully instead of directly taking the minimum of both subtrees.

## Complexity

✅ **Time Complexity:** O(n)

✅ **Space Complexity:** O(h), where `h` is the height of the tree.

🎯 **68 days completed!** Another step forward in the 100 Days DSA Challenge. Today's problem strengthened my understanding of **Binary Trees, Recursion, Tree Traversal, Leaf Nodes, and Minimum Depth**.

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🌳🔥

---

*"Consistency beats intensity."*
