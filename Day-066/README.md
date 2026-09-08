# Day 66 – LeetCode #94: Binary Tree Inorder Traversal

## Problem

**LeetCode #94 – Binary Tree Inorder Traversal**

**Difficulty:** Easy

## Approach Used: Stack + Iterative Traversal

The objective was to return the **inorder traversal** of a binary tree.

Inorder traversal follows the order:

**Left → Root → Right**

The follow-up asks us to solve the problem **iteratively instead of using recursion**, so I used a **Stack** to keep track of the nodes.

### Steps:

* Create an empty stack to store tree nodes.
* Start from the root node.
* Move toward the leftmost node while pushing each node into the stack.
* When there is no more left node, take the top node from the stack.
* Add its value to the result.
* Move to the right subtree.
* Repeat the process until the current node is `NULL` and the stack becomes empty.
* Return the resulting inorder traversal.

### Example 1

📌 **Input:**

`root = [1,null,2,3]`

📌 **Output:**

`[1,3,2]` ✅

### Example 2

📌 **Input:**

`root = [1,2,3,4,5,null,8,null,null,6,7,9]`

📌 **Output:**

`[4,2,6,5,7,1,3,9,8]` ✅

The key learning from today's problem was understanding **Inorder Tree Traversal** and how a **Stack can be used to convert a recursive tree traversal into an iterative approach**.

## Complexity

✅ **Time Complexity:** O(n)

✅ **Space Complexity:** O(n)

🎯 **66 days completed!** Another step forward in the 100 Days DSA Challenge. Today's problem strengthened my understanding of **Binary Trees, Inorder Traversal, Stack, and Iterative Tree Traversal**.

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🌳🔥

---

*"Consistency beats intensity."*
