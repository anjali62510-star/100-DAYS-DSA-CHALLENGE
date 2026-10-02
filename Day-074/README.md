# Day 74 – LeetCode #114: Flatten Binary Tree to Linked List

## 📌 Problem

Given the root of a binary tree, flatten the tree into a **linked list**.

The linked list should:

* Use the same `TreeNode` class.
* Use the `right` pointer to point to the next node.
* Have every `left` pointer set to `NULL`.
* Follow the same order as a **preorder traversal** of the binary tree.

Preorder traversal follows:

```text
Root → Left → Right
```

---

## 🟡 Difficulty

**Medium**

---

## 💡 Approach

### Recursion + In-Place Rearrangement

We recursively flatten the left and right subtrees.

For every node:

1. Flatten the left subtree.
2. Flatten the right subtree.
3. Save the original right subtree.
4. Move the flattened left subtree to the right.
5. Set the left pointer to `NULL`.
6. Find the last node of the new right subtree.
7. Attach the original right subtree to it.

---

## 🔍 Step-by-Step

```text
1. If root is NULL, return.
2. Recursively flatten the left subtree.
3. Recursively flatten the right subtree.
4. Store the original right subtree.
5. Move the left subtree to the right.
6. Set root->left = NULL.
7. Find the last node of the new right subtree.
8. Attach the original right subtree there.
```

---

## 🧪 Example 1

### Input

```text
root = [1,2,5,3,4,null,6]
```

Tree:

```text
        1
       / \
      2   5
     / \   \
    3   4   6
```

### Preorder Traversal

```text
1 → 2 → 3 → 4 → 5 → 6
```

### Flattened Tree

```text
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
```

### Output

```text
[1,null,2,null,3,null,4,null,5,null,6]
```

---

## 🧪 Example 2

### Input

```text
root = []
```

The tree is empty.

### Output

```text
[]
```

---

## 🧪 Example 3

### Input

```text
root = [0]
```

There is only one node.

### Output

```text
[0]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    void flatten(TreeNode* root) {
        // If tree is empty
        if (root == nullptr) {
            return;
        }

        // Flatten the left subtree
        flatten(root->left);

        // Flatten the right subtree
        flatten(root->right);

        // Store the original right subtree
        TreeNode* rightSubtree = root->right;

        // Move left subtree to the right
        root->right = root->left;

        // Left pointer must always be NULL
        root->left = nullptr;

        // Find the last node of the new right subtree
        TreeNode* current = root;

        while (current->right != nullptr) {
            current = current->right;
        }

        // Attach the original right subtree
        current->right = rightSubtree;
    }
};
```

---

## 🧠 Dry Run

Consider:

```text
        1
       / \
      2   5
     / \   \
    3   4   6
```

### Step 1: Preorder

The preorder order is:

```text
1 → 2 → 3 → 4 → 5 → 6
```

### Step 2: Flatten Left Subtree

The subtree rooted at `2` becomes:

```text
2
 \
  3
   \
    4
```

### Step 3: Move Left to Right of Root

The root becomes:

```text
1
 \
  2
   \
    3
     \
      4
```

### Step 4: Attach Original Right Subtree

The original right subtree was:

```text
5
 \
  6
```

Attach it after `4`:

```text
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
```

---

## ⏱️ Complexity

### Time Complexity

```text
O(n²)
```

In the worst case, we may repeatedly traverse the right side to find the last node.

### Space Complexity

```text
O(h)
```

where `h` is the height of the tree due to recursive calls.

---

## 🧠 Key Learning

Today's problem strengthened my understanding of:

* Binary Trees
* Recursion
* Preorder Traversal
* In-Place Tree Modification
* Linked List Structure
* Tree Rearrangement

### Important Pattern

The flattened tree must follow:

```text
Preorder:
Root → Left → Right
```

and finally become:

```text
Node
  \
   Node
     \
      Node
        \
         Node
```

with **all left pointers set to `NULL`**.

---

## 🎯 Challenge Progress

**Day 74/100 completed! 🔥**

Another Binary Tree problem completed and another step forward in the DSA journey.

> Consistency beats intensity.

Continuing toward **100 Days of DSA**! 🚀💻🌳
