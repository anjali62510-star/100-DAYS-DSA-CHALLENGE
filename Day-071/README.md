# Day 71 – LeetCode #104: Maximum Depth of Binary Tree

## 📌 Problem

Given the root of a binary tree, return its **maximum depth**.

The maximum depth is the number of nodes along the longest path from the root node to the farthest leaf node.

---

## 🟢 Difficulty

**Easy**

---

## 💡 Approach

### Recursion + Binary Tree Height

We can solve this problem using recursion.

For every node:

1. If the node is `NULL`, its depth is `0`.
2. Find the maximum depth of the left subtree.
3. Find the maximum depth of the right subtree.
4. Take the larger of the two depths.
5. Add `1` for the current node.

### Formula

```text
Maximum Depth = 1 + max(Left Subtree Depth, Right Subtree Depth)
```

---

## 🔍 Step-by-Step

For every node:

```text
1. Check if the node is NULL.
2. Recursively calculate left subtree depth.
3. Recursively calculate right subtree depth.
4. Take the maximum of both.
5. Add 1 for the current node.
```

---

## 🧪 Example 1

### Input

```text
root = [3,9,20,null,null,15,7]
```

Tree:

```text
        3
       / \
      9   20
         /  \
        15   7
```

### Calculation

```text
Depth(9)  = 1

Depth(15) = 1
Depth(7)  = 1

Depth(20) = 1 + max(1, 1)
          = 2

Depth(3) = 1 + max(1, 2)
         = 3
```

### Output

```text
3
```

---

## 🧪 Example 2

### Input

```text
root = [1,null,2]
```

Tree:

```text
    1
     \
      2
```

### Output

```text
2
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // If tree is empty
        if (root == nullptr) {
            return 0;
        }

        // Find depth of left subtree
        int leftDepth = maxDepth(root->left);

        // Find depth of right subtree
        int rightDepth = maxDepth(root->right);

        // Return 1 for current node
        // + maximum depth of left/right subtree
        return 1 + max(leftDepth, rightDepth);
    }
};
```

---

## ⏱️ Complexity

### Time Complexity

```text
O(n)
```

Every node is visited once.

### Space Complexity

```text
O(h)
```

where `h` is the height of the tree because of the recursive call stack.

---

## 🧠 Key Learning

This problem helped strengthen my understanding of:

* Binary Trees
* Recursion
* Tree Height
* Recursive Traversal
* Divide and Conquer

The main idea to remember is:

```text
Maximum Depth = 1 + maximum depth of the two subtrees
```

---

## 🎯 Challenge Progress

**Day 71/100 completed! 🔥**

> Consistency beats intensity.

Continuing the journey toward **100 Days of DSA**! 🚀
