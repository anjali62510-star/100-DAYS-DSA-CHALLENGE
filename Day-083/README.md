# Day 83 – LeetCode #235: Lowest Common Ancestor of a Binary Search Tree

## 🧩 Problem

Given the root of a Binary Search Tree (BST) and two nodes `p` and `q`, find their **Lowest Common Ancestor (LCA)**.

The Lowest Common Ancestor is the lowest node in the tree that has both `p` and `q` as descendants.

A node can also be a descendant of itself.

---

## 💡 Approach Used

### BST Property + Recursion

We use the Binary Search Tree property to find the Lowest Common Ancestor efficiently.

**BST Property:**
- Values smaller than the current node are present in the left subtree.
- Values greater than the current node are present in the right subtree.

Based on this property:

- If both `p` and `q` are smaller than the current node, search the left subtree.
- If both are greater, search the right subtree.
- Otherwise, the current node is the LCA.

---

## 🧠 Steps

1. Start from the root node.
2. Compare the values of `p` and `q` with the current node.
3. If both values are smaller, recursively search the left subtree.
4. If both values are greater, recursively search the right subtree.
5. If neither condition is true, return the current node because it is the LCA.

---

## 🔍 Dry Run

**Input:**

```text
root = [6,2,8,0,4,7,9,null,null,3,5]
p = 2
q = 8
```

BST:

```text
          6
        /   \
       2     8
      / \   / \
     0   4 7   9
        / \
       3   5
```

### Step 1

Current node = `6`

- `p = 2`
- `q = 8`

Since `2 < 6` and `8 > 6`, the nodes are on opposite sides of the current node.

Therefore, `6` is the Lowest Common Ancestor.

**Output:**

```text
6
```

### Example 2

**Input:**

```text
p = 2
q = 4
```

- Both values are smaller than `6`, so move left.
- At node `2`, one target matches the current node and the other is in its right subtree.

Therefore, `2` is the LCA.

**Output:**

```text
2
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // If both nodes are smaller, search left
        if (p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        // If both nodes are greater, search right
        if (p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        // Otherwise, current node is the LCA
        return root;
    }
};
```

---

## ⏱️ Complexity Analysis

### Time Complexity: O(h)

We follow only one path from the root to find the LCA.

Here, `h` represents the height of the BST.

- Balanced BST: O(log n)
- Skewed BST: O(n)

### Space Complexity: O(h)

Recursive function calls use extra space depending on the height of the tree.

---

## 📚 Key Learnings

- Learned how to find the Lowest Common Ancestor in a BST.
- Understood how BST properties simplify tree searching.
- Practiced recursion and subtree traversal.
- Learned how to identify the split point between two target nodes.
- Understood that a node can be its own ancestor.

---

## 🔥 Day 83/100 Completed!

**Problem:** LeetCode #235 – Lowest Common Ancestor of a Binary Search Tree  
**Difficulty:** Medium  
**Topics:** Binary Search Tree, Recursion, Trees

**83/100 Days Completed | 17 Days Remaining!**

> Consistency beats intensity.

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BST #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins