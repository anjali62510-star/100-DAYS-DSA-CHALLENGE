# Day 76 – LeetCode #129: Sum Root to Leaf Numbers

## 📌 Problem

You are given the root of a binary tree containing digits from `0` to `9`.

Each **root-to-leaf path** represents a number.

For example:

```text
1 → 2 → 3
```

represents the number:

```text
123
```

The task is to return the **sum of all root-to-leaf numbers**.

---

## 🎯 Difficulty

**Medium**

---

## 💡 Approach Used

### Recursion + Depth First Search (DFS)

We traverse the binary tree using recursion.

While moving from the root towards a leaf, we build the current number.

For every node:

```text
currentNumber = currentNumber × 10 + node->val
```

When we reach a leaf node, the complete number is returned.

Finally, we add the values obtained from the left and right subtrees.

---

## 🧠 Steps

1. Start with `currentNumber = 0`.
2. Visit the current node.
3. Add its digit to the current number.
4. If the node is a leaf, return the number.
5. Recursively calculate the sum from the left subtree.
6. Recursively calculate the sum from the right subtree.
7. Add both results and return the total.

---

## 🔍 Example 1

### Input

```text
root = [1,2,3]
```

Tree:

```text
    1
   / \
  2   3
```

Root-to-leaf paths:

```text
1 → 2 = 12
1 → 3 = 13
```

Therefore:

```text
12 + 13 = 25
```

### Output

```text
25
```

---

## 🔍 Example 2

### Input

```text
root = [4,9,0,5,1]
```

Tree:

```text
        4
       / \
      9   0
     / \
    5   1
```

Root-to-leaf paths:

```text
4 → 9 → 5 = 495
4 → 9 → 1 = 491
4 → 0     = 40
```

Therefore:

```text
495 + 491 + 40 = 1026
```

### Output

```text
1026
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    int solve(TreeNode* root, int currentNumber) {

        // If node is NULL
        if (root == nullptr) {
            return 0;
        }

        // Build the current number
        currentNumber = currentNumber * 10 + root->val;

        // If it is a leaf node
        if (root->left == nullptr && root->right == nullptr) {
            return currentNumber;
        }

        // Calculate sum from left and right subtrees
        return solve(root->left, currentNumber) +
               solve(root->right, currentNumber);
    }

    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};
```

---

## 📝 Dry Run

For:

```text
    1
   / \
  2   3
```

### Step 1: Visit `1`

```text
currentNumber = 0
```

Build the number:

```text
0 × 10 + 1 = 1
```

### Step 2: Go to `2`

```text
1 × 10 + 2 = 12
```

`2` is a leaf.

Return:

```text
12
```

### Step 3: Go to `3`

```text
1 × 10 + 3 = 13
```

`3` is a leaf.

Return:

```text
13
```

### Step 4: Add both paths

```text
12 + 13 = 25
```

Therefore:

```text
Answer = 25
```

---

## ⏱️ Complexity Analysis

### Time Complexity

```text
O(n)
```

Each node is visited exactly once.

### Space Complexity

```text
O(h)
```

where `h` is the height of the tree because of the recursion stack.

---

## 📚 Key Learnings

* Learned how to use **DFS recursion** on a binary tree.
* Understood how to build a number while traversing from root to leaf.
* Learned how to identify a leaf node.
* Practiced combining results from the left and right subtrees.
* Improved understanding of recursion and tree traversal.

---

## 🔥 Day 76/100 Completed!

**76 Days Completed | 24 Days Remaining**

> "Consistency beats intensity."

🚀 One problem at a time. One day at a time. Continuing the journey toward 100 Days of DSA!
