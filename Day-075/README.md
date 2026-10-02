# Day 75 – LeetCode #236: Lowest Common Ancestor of a Binary Tree

## 📌 Problem

Given a binary tree, find the **Lowest Common Ancestor (LCA)** of two given nodes `p` and `q`.

The Lowest Common Ancestor is the lowest node in the tree that has both `p` and `q` as descendants.

A node can also be considered a descendant of itself.

---

## 🎯 Difficulty

**Medium**

---

## 💡 Approach Used

### Recursion – Search Both Subtrees

The main idea is to recursively search for `p` and `q` in the binary tree.

For every node:

1. If the current node is `NULL`, return `NULL`.
2. If the current node is `p` or `q`, return the current node.
3. Search for `p` and `q` in the left subtree.
4. Search for `p` and `q` in the right subtree.
5. If both left and right return a node, the current node is the LCA.
6. If only one side returns a node, return that node.

### 🧠 Why does this work?

Suppose `p` is found somewhere in the left subtree and `q` is found somewhere in the right subtree.

Then the current node is the first node where their paths meet.

Therefore, that node is their **Lowest Common Ancestor**.

---

## 🔍 Example 1

### Input

```text
root = [3,5,1,6,2,0,8,null,null,7,4]
p = 5
q = 1
```

Tree:

```text
        3
       / \
      5   1
     / \ / \
    6  2 0  8
      / \
     7   4
```

### Output

```text
3
```

### Explanation

* Node `5` is found in the left subtree of `3`.
* Node `1` is found in the right subtree of `3`.
* Both nodes are found on different sides.

Therefore:

```text
LCA = 3
```

---

## 🔍 Example 2

### Input

```text
root = [3,5,1,6,2,0,8,null,null,7,4]
p = 5
q = 4
```

### Output

```text
5
```

### Explanation

Node `4` is inside the subtree of node `5`.

Since a node can be a descendant of itself, `5` is the Lowest Common Ancestor.

---

## 🔍 Example 3

### Input

```text
root = [1,2]
p = 1
q = 2
```

### Output

```text
1
```

Node `1` is the ancestor of node `2`, so the LCA is `1`.

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // If root is NULL, p, or q
        if (root == nullptr || root == p || root == q) {
            return root;
        }

        // Search in left subtree
        TreeNode* left = lowestCommonAncestor(root->left, p, q);

        // Search in right subtree
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // p and q are found in different subtrees
        if (left != nullptr && right != nullptr) {
            return root;
        }

        // Return the side where p or q was found
        if (left != nullptr) {
            return left;
        }

        return right;
    }
};
```

---

## 📝 Dry Run

For:

```text
p = 5
q = 1
```

At node `3`:

```text
        3
       / \
      5   1
```

### Step 1

Search the left subtree:

```text
left = 5
```

### Step 2

Search the right subtree:

```text
right = 1
```

### Step 3

Both are non-null:

```text
left != NULL
right != NULL
```

Therefore, return the current node:

```text
3
```

So:

```text
LCA = 3
```

---

## ⏱️ Complexity Analysis

### Time Complexity

```text
O(n)
```

Each node is visited at most once.

### Space Complexity

```text
O(h)
```

where `h` is the height of the binary tree because of the recursion stack.

---

## 📚 Key Learnings

* Learned how to find the Lowest Common Ancestor in a binary tree.
* Practiced recursive traversal of a binary tree.
* Understood how information can be returned from both left and right subtrees.
* Learned that when both subtrees contain one of the target nodes, the current node is the LCA.
* Improved understanding of recursion and tree-based problem solving.

---

## 🔥 Day 75/100 Completed!

**75 Days Completed | 25 Days Remaining**

> "Consistency beats intensity."

🚀 Continuing the journey toward 100 Days of DSA!
