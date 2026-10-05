# Day 81 – LeetCode #700: Search in a Binary Search Tree

## 🧩 Problem

Given the root of a **Binary Search Tree (BST)** and an integer `val`, find the node whose value is equal to `val`.

If the value exists, return the **subtree rooted at that node**.

If the value does not exist, return `nullptr`.

### 📌 BST Property

In a Binary Search Tree:

* Values smaller than the current node are present in the **left subtree**.
* Values greater than the current node are present in the **right subtree**.

This property helps us search efficiently.

---

## 💡 Approach Used

### Recursion + BST Property

At every node, compare `val` with `root->val`.

* If `val == root->val` → value found, return `root`.
* If `val < root->val` → search the left subtree.
* If `val > root->val` → search the right subtree.
* If `root == nullptr` → value does not exist.

This avoids checking every node of the tree.

---

## 🧠 Steps

1. Start from the root.
2. If the root is `nullptr`, return `nullptr`.
3. Compare the target value with the current node.
4. If both values are equal, return the current node.
5. If the target value is smaller, recursively search the left subtree.
6. If the target value is larger, recursively search the right subtree.
7. Return `nullptr` if the value is not found.

---

## 🔍 Dry Run

Consider the BST:

```text
        4
       / \
      2   7
     / \
    1   3
```

### Search for `2`

**Step 1:**

Current node:

```text
4
```

Since:

```text
2 < 4
```

Move to the left subtree.

---

**Step 2:**

Current node:

```text
2
```

Since:

```text
2 == 2
```

✅ Value found!

Return the subtree rooted at `2`:

```text
    2
   / \
  1   3
```

Output:

```text
[2,1,3]
```

---

## 📌 Example 2

Search for `5`:

```text
        4
       / \
      2   7
     / \
    1   3
```

### Step 1

```text
5 > 4
```

Move right.

### Step 2

Current node is `7`.

```text
5 < 7
```

Move left.

There is no node there.

Therefore, `5` does not exist.

**Output:**

```text
[]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        // If tree is empty or value is not found
        if (root == nullptr) {
            return nullptr;
        }

        // Value found
        if (root->val == val) {
            return root;
        }

        // Search in left subtree
        if (val < root->val) {
            return searchBST(root->left, val);
        }

        // Search in right subtree
        return searchBST(root->right, val);
    }
};
```

---

## ⏱️ Complexity

### Time Complexity: O(h)

We only follow one path from the root instead of visiting every node.

Here, `h` is the height of the BST.

* Balanced BST → `O(log n)`
* Skewed BST → `O(n)`

### Space Complexity: O(h)

The recursive calls use space according to the height of the tree.

---

## 📚 Key Learnings

* Learned how to search efficiently in a **Binary Search Tree**.
* Understood the important BST property.
* Practiced recursive tree traversal.
* Learned that we don't need to search both subtrees.
* Improved my understanding of how BSTs make searching faster.

---

## 🔥 Day 81/100 Completed!

**Problem:** LeetCode #700 – Search in a Binary Search Tree
**Difficulty:** Easy
**Topic:** Binary Search Tree, Recursion

```text
81 / 100 Days Completed
19 Days Remaining 🔥
```

> **Consistency beats intensity.**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BST #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #Day81 #InterviewPreparation #ConsistencyWins
