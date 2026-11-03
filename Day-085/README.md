# Day 85 – LeetCode #98: Validate Binary Search Tree

**Difficulty:** Medium  
**Topic:** Binary Tree, Binary Search Tree, Recursion  
**Language:** C++

---

## Problem Statement

Given the root of a binary tree, determine whether it is a valid Binary Search Tree (BST).

A valid BST follows these rules:

1. All nodes in the left subtree must have values strictly smaller than the current node.
2. All nodes in the right subtree must have values strictly greater than the current node.
3. Both left and right subtrees must also be valid BSTs.
4. Duplicate values are not allowed.

---

## Approach: Recursion with Minimum and Maximum Range

We use recursion to check whether every node falls within its allowed range.

For each node, we maintain:
- `minVal`: Minimum allowed value.
- `maxVal`: Maximum allowed value.

Initially, the range is `LLONG_MIN` to `LLONG_MAX`.

### Steps

1. If the current node is `nullptr`, return `true`.
2. Check whether the node's value is within the allowed range.
3. If its value is less than or equal to the minimum or greater than or equal to the maximum, return `false`.
4. Recursively check the left subtree with the updated maximum.
5. Recursively check the right subtree with the updated minimum.
6. Return `true` only if both subtrees are valid.

---

## Dry Run

**Example 1:**

Input: `root = [2,1,3]`

```text
       2
      / \
     1   3
```

| Node | Allowed Range | Result |
|---|---|---|
| 2 | -∞ to +∞ | Valid |
| 1 | -∞ to 2 | Valid |
| 3 | 2 to +∞ | Valid |

Both subtrees satisfy the BST property.

**Output:** `true`

**Example 2:**

Input: `root = [5,1,4,null,null,3,6]`

```text
       5
      / \
     1   4
        / \
       3   6
```

The right subtree of `5` must contain only values greater than `5`.

However, node `4` is smaller than `5`, so the BST property is violated.

**Output:** `false`

---

## C++ Solution

```cpp
class Solution {
public:

    bool check(TreeNode* root, long long minVal, long long maxVal) {

        // Empty tree is a valid BST
        if (root == nullptr) {
            return true;
        }

        // Check whether current node is within the valid range
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }

        // Check left and right subtrees
        bool left = check(root->left, minVal, root->val);
        bool right = check(root->right, root->val, maxVal);

        return left && right;
    }

    bool isValidBST(TreeNode* root) {

        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
```

---

## Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | Every node is visited once. |
| Space Complexity | O(h) | Recursive call stack depends on tree height. |

- Balanced tree: O(log n) auxiliary space.
- Skewed tree: O(n) auxiliary space.

Here, `n` is the number of nodes and `h` is the height of the tree.

---

## Key Learnings

- Understood how to validate a Binary Search Tree using recursion.
- Learned why checking only immediate children is insufficient.
- Used minimum and maximum boundaries to validate the entire subtree.
- Understood why `long long` is useful for handling `INT_MIN` and `INT_MAX` values.
- Improved understanding of recursive tree traversal.

---

## Progress

- Day: 85/100
- Problem: LeetCode #98 – Validate Binary Search Tree
- Difficulty: Medium
- Status: Completed

**100 Days DSA Challenge – One problem at a time, one day at a time!**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BinaryTree #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins