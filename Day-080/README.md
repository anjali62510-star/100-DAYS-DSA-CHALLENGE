# Day 80 – LeetCode #101: Symmetric Tree

## 🧩 Problem

Given the root of a binary tree, check whether the tree is **symmetric around its center**.

A binary tree is symmetric when its left subtree is a **mirror image** of its right subtree.

### Example 1

**Input:**

```text id="4d9lqm"
root = [1,2,2,3,4,4,3]
```

Tree:

```text id="9q5v2k"
        1
       / \
      2   2
     / \ / \
    3  4 4  3
```

**Output:**

```text id="c3y4i7"
true
```

The left and right sides are mirror images of each other.

---

## 💡 Approach Used

### Recursion – Mirror Comparison

We compare the left and right subtrees as **mirror images**.

For two nodes to be mirrors:

1. Both nodes must be `nullptr`, or
2. Both nodes must exist and have the same value.
3. The left child of the first node must match the right child of the second node.
4. The right child of the first node must match the left child of the second node.

The important part is that we compare the **opposite sides**:

```cpp id="0h5d9z"
check(left->left, right->right)
check(left->right, right->left)
```

---

## 🧠 Steps

1. If the root is `nullptr`, return `true`.
2. Start by comparing the root's left and right children.
3. If both nodes are `nullptr`, they are symmetric.
4. If only one node is `nullptr`, they are not symmetric.
5. If their values are different, return `false`.
6. Compare:

   * Left subtree of the left node with right subtree of the right node.
   * Right subtree of the left node with left subtree of the right node.
7. Return `true` only if both comparisons are true.

---

## 🔍 Dry Run

Consider:

```text id="zjz7qy"
        1
       / \
      2   2
     / \ / \
    3  4 4  3
```

### Step 1

Compare the two children of root:

```text id="j23qj8"
2 == 2
```

✅ Same

### Step 2

Compare opposite children:

```text id="l5a0d3"
Left side's left  = 3
Right side's right = 3
```

✅ Same

### Step 3

Compare:

```text id="3v2c9a"
Left side's right = 4
Right side's left = 4
```

✅ Same

### Step 4

Continue recursively for the remaining nodes.

All corresponding mirror nodes match.

Therefore:

```text id="h6r8zk"
Output = true
```

---

## 📌 Example 2

**Input:**

```text id="q5v4py"
root = [1,2,2,null,3,null,3]
```

Tree:

```text id="x1r6wm"
        1
       / \
      2   2
       \   \
        3   3
```

The left and right sides are **not mirror images**.

Therefore:

```text id="m4n7sp"
Output = false
```

---

## 💻 C++ Solution

```cpp id="z7p4xm"
class Solution {
public:
    bool check(TreeNode* left, TreeNode* right) {

        // Both nodes are empty
        if (left == nullptr && right == nullptr) {
            return true;
        }

        // One node is empty
        if (left == nullptr || right == nullptr) {
            return false;
        }

        // Values are different
        if (left->val != right->val) {
            return false;
        }

        // Compare opposite sides
        return check(left->left, right->right) &&
               check(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {

        if (root == nullptr) {
            return true;
        }

        return check(root->left, root->right);
    }
};
```

---

## ⏱️ Complexity

### Time Complexity: O(n)

Every node is visited and compared at most once.

### Space Complexity: O(h)

The recursive calls use space according to the height of the tree.

* Balanced tree → `O(log n)`
* Skewed tree → `O(n)`

---

## 📚 Key Learnings

* Learned how to check whether a binary tree is symmetric.
* Understood the concept of a **mirror tree**.
* Practiced comparing opposite sides of two subtrees.
* Strengthened my understanding of recursive tree traversal.
* Learned that symmetry depends on both **node values and structure**.

---

## 🔥 Day 80/100 Completed!

**Problem:** LeetCode #101 – Symmetric Tree
**Difficulty:** Easy
**Topic:** Binary Tree, Recursion, Mirror Tree

```text id="u9k3rf"
80 / 100 Days Completed
20 Days Remaining 🔥
```

> **Consistency beats intensity.**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinaryTree #Recursion #SymmetricTree #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #Day80 #InterviewPreparation #ConsistencyWins
