# Day 69 – LeetCode #404: Sum of Left Leaves

## Problem

**LeetCode #404 – Sum of Left Leaves**

**Difficulty:** Easy

## Approach Used: Recursion + Binary Tree Traversal

The objective was to find the **sum of all left leaf nodes** in a binary tree.

A **leaf node** is a node that has no left or right child.

A **left leaf** is a leaf node that is the **left child of another node**.

### Steps:

* Start from the root node.
* If the tree is empty, return `0`.
* Check if the current node has a left child.
* Check whether the left child is a leaf node.
* If it is a left leaf, add its value to the sum.
* Recursively search the left subtree.
* Recursively search the right subtree.
* Return the total sum.

### Example 1

📌 **Input:**

`root = [3,9,20,null,null,15,7]`

📌 **Output:**

`24` ✅

The left leaves are:

`9` and `15`

Therefore:

`9 + 15 = 24`

### Example 2

📌 **Input:**

`root = [1]`

📌 **Output:**

`0` ✅

There are no left leaves in the tree.

## C++ Program

```cpp
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // If tree is empty
        if (root == nullptr) {
            return 0;
        }

        int sum = 0;

        // Check if left child exists and is a leaf
        if (root->left != nullptr &&
            root->left->left == nullptr &&
            root->left->right == nullptr) {
            
            sum += root->left->val;
        }

        // Recursively check left subtree
        sum += sumOfLeftLeaves(root->left);

        // Recursively check right subtree
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};
```

The key learning from today's problem was understanding how to identify a **left leaf node** and use **Recursion** to traverse the entire Binary Tree while calculating the required sum.

## Complexity

✅ **Time Complexity:** O(n)

✅ **Space Complexity:** O(h), where `h` is the height of the tree.

🎯 **69 days completed!** Another step forward in the 100 Days DSA Challenge. Today's problem strengthened my understanding of **Binary Trees, Recursion, Tree Traversal, Leaf Nodes, and Subtree Processing**.

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🌳🔥

---

*"Consistency beats intensity."*
