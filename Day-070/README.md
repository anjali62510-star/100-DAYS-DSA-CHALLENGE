# Day 70 – LeetCode #543: Diameter of Binary Tree

## Problem

**LeetCode #543 – Diameter of Binary Tree**

**Difficulty:** Easy

## Approach Used: Recursion + Binary Tree Height

The objective was to find the **diameter of a binary tree**.

The diameter is the **longest path between any two nodes** in the tree. The length of the path is measured by the **number of edges** between the nodes.

The longest path does not necessarily have to pass through the root.

### Steps:

* Start from the root node.
* Recursively find the height of the left subtree.
* Recursively find the height of the right subtree.
* For the current node, calculate the diameter as:
  `leftHeight + rightHeight`
* Keep updating the maximum diameter found.
* Return the height of the current node as:
  `1 + max(leftHeight, rightHeight)`.
* Finally, return the maximum diameter.

### Example 1

📌 **Input:**

`root = [1,2,3,4,5]`

📌 **Output:**

`3` ✅

The longest path can be:

`4 → 2 → 1 → 3`

There are **3 edges** in this path.

### Example 2

📌 **Input:**

`root = [1,2]`

📌 **Output:**

`1` ✅

The longest path is:

`2 → 1`

There is **1 edge** between the two nodes.

## C++ Program

```cpp
class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        // If the node is empty
        if (root == nullptr) {
            return 0;
        }

        // Find height of left subtree
        int leftHeight = height(root->left);

        // Find height of right subtree
        int rightHeight = height(root->right);

        // Diameter passing through current node
        diameter = max(diameter, leftHeight + rightHeight);

        // Return height of current node
        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
```

The key learning from today's problem was understanding how **Tree Height and Recursion** can be combined to calculate the diameter of a Binary Tree efficiently.

Instead of calculating the height repeatedly for every node, we calculate the height and diameter together during the same traversal.

## Complexity

✅ **Time Complexity:** O(n)

✅ **Space Complexity:** O(h), where `h` is the height of the tree.

🎯 **70 days completed!** Another major milestone in the 100 Days DSA Challenge. Today's problem strengthened my understanding of **Binary Trees, Recursion, Tree Height, and Diameter Calculation**.

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🌳🔥

---

*"Consistency beats intensity."*
