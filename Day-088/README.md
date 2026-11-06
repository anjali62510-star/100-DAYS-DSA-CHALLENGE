# Day 88 – LeetCode #938: Range Sum of BST

**Difficulty:** Easy  
**Topic:** Binary Search Tree, Binary Tree, Recursion, Tree Traversal  
**Language:** C++

---

## Problem Statement

Given the root node of a Binary Search Tree (BST) and two integers `low` and `high`, return the sum of values of all nodes whose values lie within the inclusive range `[low, high]`.

Both `low` and `high` are included in the range.

---

## Approach: BST Property with Recursion

We use the Binary Search Tree property to find the required values efficiently.

Remember:

- Left subtree contains smaller values.
- Right subtree contains greater values.

Instead of visiting every node unnecessarily, we skip subtrees that cannot contain values in the given range.

### Steps

1. If the current node is `nullptr`, return `0`.
2. If the current node's value is smaller than `low`, search only the right subtree.
3. If the current node's value is greater than `high`, search only the left subtree.
4. If the value lies within the range:
   - Add the current node's value.
   - Recursively calculate the sum of the left subtree.
   - Recursively calculate the sum of the right subtree.
5. Return the total sum.

---

## Dry Run

**Input:**

```text
root = [10,5,15,3,7,null,18]
low = 7
high = 15
```

Binary Tree:

```text
        10
       /  \
      5    15
     / \     \
    3   7     18
```

### Step-by-step execution

| Node | Condition | Action |
|---|---|---|
| 10 | 7 ≤ 10 ≤ 15 | Include 10 |
| 5 | 5 < 7 | Search only right subtree |
| 7 | 7 ≤ 7 ≤ 15 | Include 7 |
| 15 | 7 ≤ 15 ≤ 15 | Include 15 |
| 18 | 18 > 15 | Search only left subtree |

### Calculate the sum

```text
Sum = 10 + 7 + 15
    = 32
```

**Output:** `32`

---

## C++ Solution

```cpp
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {

        // If node is empty, return 0
        if (root == nullptr) {
            return 0;
        }

        // If value is smaller than low,
        // search only the right subtree
        if (root->val < low) {
            return rangeSumBST(root->right, low, high);
        }

        // If value is greater than high,
        // search only the left subtree
        if (root->val > high) {
            return rangeSumBST(root->left, low, high);
        }

        // Current value is inside the range
        return root->val
             + rangeSumBST(root->left, low, high)
             + rangeSumBST(root->right, low, high);
    }
};
```

---

## Complexity Analysis

Let `n` be the total number of nodes and `h` be the height of the BST.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) worst case | Every node may need to be visited. |
| Space Complexity | O(h) | Recursive call stack depends on tree height. |

- Balanced BST: O(log n) auxiliary space.
- Skewed BST: O(n) auxiliary space.

---

## Key Learnings

- Learned how to calculate the sum of BST nodes within a given range.
- Practiced recursive tree traversal.
- Understood how BST properties help skip unnecessary subtrees.
- Learned the concept of pruning during recursion.
- Improved understanding of efficient BST traversal.

---

## Progress

- Day: 88/100
- Problem: LeetCode #938 – Range Sum of BST
- Difficulty: Easy
- Status: Completed

**100 Days DSA Challenge – One problem at a time, one day at a time!**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BinaryTree #Recursion #TreeTraversal #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins