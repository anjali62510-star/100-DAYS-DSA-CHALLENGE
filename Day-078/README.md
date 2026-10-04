# Day 78 – LeetCode #226: Invert Binary Tree

## 🧩 Problem

Given the root of a binary tree, **invert the tree** and return its root.

Inverting a binary tree means swapping the **left child** and **right child** of every node.

### Example

**Input:**

```text
       4
      / \
     2   7
    / \ / \
   1  3 6  9
```

**Output:**

```text
       4
      / \
     7   2
    / \ / \
   9  6 3  1
```

---

## 💡 Approach Used

### Recursion

We use recursion to visit every node of the binary tree.

For each node:

1. Recursively process the left subtree.
2. Recursively process the right subtree.
3. Swap the left and right children.
4. Return the root.

The important operation is:

```cpp
swap(root->left, root->right);
```

This is repeated for every node in the tree.

---

## 🧠 Steps

1. Check if the root is `nullptr`.
2. If the tree is empty, return `nullptr`.
3. Recursively invert the left subtree.
4. Recursively invert the right subtree.
5. Swap the left and right children of the current node.
6. Return the root.

---

## 🔍 Dry Run

Consider:

```text
       2
      / \
     1   3
```

### Step 1

Start at node `2`.

```text
Left = 1
Right = 3
```

### Step 2

Visit node `1`.

It has no children, so nothing needs to be swapped.

### Step 3

Visit node `3`.

It also has no children.

### Step 4

Now return to node `2` and swap its children.

Before:

```text
       2
      / \
     1   3
```

After:

```text
       2
      / \
     3   1
```

Therefore, the inverted tree is:

```text
[2,3,1]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        // If tree is empty
        if (root == nullptr) {
            return nullptr;
        }

        // Recursively invert left subtree
        invertTree(root->left);

        // Recursively invert right subtree
        invertTree(root->right);

        // Swap left and right children
        swap(root->left, root->right);

        return root;
    }
};
```

---

## 📌 Example 2

**Input:**

```text
[2,1,3]
```

Tree:

```text
    2
   / \
  1   3
```

After inversion:

```text
    2
   / \
  3   1
```

**Output:**

```text
[2,3,1]
```

---

## 📌 Example 3

**Input:**

```text
[]
```

The tree is empty, so the answer is also:

```text
[]
```

---

## ⏱️ Complexity

### Time Complexity: O(n)

Every node is visited exactly once.

### Space Complexity: O(h)

The recursion stack uses space according to the height of the tree.

* Balanced tree → `O(log n)`
* Skewed tree → `O(n)`

---

## 📚 Key Learnings

* Learned how to invert a binary tree using recursion.
* Understood how to swap the left and right children of every node.
* Practiced recursive traversal of a binary tree.
* Learned how the base case prevents recursion from going beyond leaf nodes.
* Strengthened my understanding of tree recursion.

---

## 🔥 Day 78/100 Completed!

**Problem:** LeetCode #226 – Invert Binary Tree
**Difficulty:** Easy
**Topic:** Binary Tree, Recursion

```text
78 / 100 Days Completed
22 Days Remaining 🔥
```

> **Consistency beats intensity.**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinaryTree #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #Day78 #InterviewPreparation #ConsistencyWins
