# Day 82 – LeetCode #701: Insert into a Binary Search Tree

## 🧩 Problem

Given the root of a Binary Search Tree (BST) and an integer `val`, insert the value into the BST and return the updated root.

The new value is guaranteed not to exist in the original tree.

The BST property must be maintained after insertion.

### 📌 BST Property

- Values smaller than the current node are stored in the left subtree.
- Values greater than the current node are stored in the right subtree.

---

## 💡 Approach Used

### Recursion + BST Property

We use recursion to find the correct position for inserting the new node.

At every node:

- If the current node is `nullptr`, create a new node.
- If the value is smaller, move towards the left subtree.
- If the value is greater, move towards the right subtree.
- Return the updated root after insertion.

---

## 🧠 Steps

1. Start from the root node.
2. Check whether the current node is `nullptr`.
3. If it is empty, create a new node using `new TreeNode(val)`.
4. If the new value is smaller than the current node, recursively insert it into the left subtree.
5. If the new value is greater, recursively insert it into the right subtree.
6. Return the current root to maintain the original tree structure.

---

## 🔍 Dry Run

**Input:**

```text
root = [4,2,7,1,3]
val = 5
```

Initial BST:

```text
        4
       / \
      2   7
     / \
    1   3
```

### Step 1

Compare `5` with `4`.

```text
5 > 4
```

Move to the right subtree.

### Step 2

Compare `5` with `7`.

```text
5 < 7
```

Move to the left subtree.

### Step 3

The left position of node `7` is empty (`nullptr`).

Create a new node containing `5`.

### Final BST

```text
        4
       / \
      2   7
     / \ /
    1  3 5
```

**Output:**

```text
[4,2,7,1,3,5]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        // If the position is empty, insert the new node
        if (root == nullptr) {
            return new TreeNode(val);
        }

        // If value is smaller, insert in left subtree
        if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        }

        // If value is greater, insert in right subtree
        else {
            root->right = insertIntoBST(root->right, val);
        }

        // Return the updated root
        return root;
    }
};
```

---

## ⏱️ Complexity Analysis

### Time Complexity: O(h)

We follow only one path from the root to the insertion position.

Here, `h` represents the height of the BST.

- Balanced BST: O(log n)
- Skewed BST: O(n)

### Space Complexity: O(h)

Recursive function calls use extra space depending on the height of the tree.

---

## 📚 Key Learnings

- Learned how to insert a new node into a Binary Search Tree.
- Understood how BST properties help find the correct position.
- Practiced recursive tree manipulation.
- Learned the importance of returning the updated root.
- Strengthened my understanding of recursion and binary trees.

---

## 🔥 Day 82/100 Completed!

**Problem:** LeetCode #701 – Insert into a Binary Search Tree  
**Difficulty:** Medium  
**Topics:** Binary Search Tree, Recursion

**82/100 Days Completed | 18 Days Remaining!**

> Consistency beats intensity.

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BST #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins
