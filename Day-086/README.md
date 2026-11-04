# Day 86 – LeetCode #230: Kth Smallest Element in a BST

**Difficulty:** Medium  
**Topic:** Binary Search Tree, Binary Tree, Inorder Traversal, Recursion  
**Language:** C++

---

## Problem Statement

Given the root of a Binary Search Tree (BST) and an integer `k`, return the kth smallest value (1-indexed) among all the nodes in the tree.

---

## Approach: Inorder Traversal

A Binary Search Tree has the following property:

- Left subtree contains smaller values.
- Right subtree contains greater values.

Inorder traversal follows:

**Left → Root → Right**

This means inorder traversal of a BST gives the node values in sorted ascending order.

We can use this property to find the kth smallest element.

### Steps

1. Start traversing the tree from the root.
2. First visit the left subtree.
3. Visit the current node and increase the counter.
4. If the counter becomes equal to `k`, store the current node's value.
5. Traverse the right subtree.
6. Stop once the kth element is found.

---

## Dry Run

**Example 1:**

Input:
```text
root = [3,1,4,null,2]
k = 1
```

Binary Tree:
```text
       3
      / \
     1   4
      \
       2
```

Inorder Traversal:
```text
1 → 2 → 3 → 4
```

| Visited Node | Count | Action |
|---|---:|---|
| 1 | 1 | Found kth smallest element |

Since `k = 1`, the first visited element is the answer.

**Output:** `1`

**Example 2:**

Input:
```text
root = [5,3,6,2,4,null,null,1]
k = 3
```

Inorder Traversal:
```text
1 → 2 → 3 → 4 → 5 → 6
```

| Visited Node | Count |
|---|---:|
| 1 | 1 |
| 2 | 2 |
| 3 | 3 |

When the count reaches 3, we find the answer.

**Output:** `3`

---

## C++ Solution

```cpp
class Solution {
public:
    int count = 0;
    int answer = -1;

    void inorder(TreeNode* root, int k) {

        // Base condition
        if (root == nullptr || count >= k) {
            return;
        }

        // Step 1: Traverse left subtree
        inorder(root->left, k);

        // Step 2: Visit current node
        count++;

        // Check if this is the kth smallest element
        if (count == k) {
            answer = root->val;
            return;
        }

        // Step 3: Traverse right subtree
        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {

        inorder(root, k);

        return answer;
    }
};
```

---

## Complexity Analysis

Let `n` be the number of nodes and `h` be the height of the tree.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(h + k) | Visits nodes until the kth smallest element is found. |
| Space Complexity | O(h) | Recursive call stack. |

**Worst case:** Time complexity can be O(n).

---

## Follow-up: Optimizing Frequent Queries

If the BST is modified frequently through insertions and deletions, we can use an **Augmented BST**.

- Store the size of each node's subtree.
- Update subtree sizes after insertion and deletion.
- Use the left subtree size to decide where the kth smallest element exists.

For a balanced augmented BST:

- Kth smallest search: O(log n)
- Insertion: O(log n)
- Deletion: O(log n)

---

## Key Learnings

- Understood why inorder traversal of a BST produces sorted values.
- Learned to find the kth smallest element using a counter.
- Practiced recursive tree traversal.
- Understood how subtree sizes can optimize repeated kth-smallest queries.

---

## Progress

- Day: 86/100
- Problem: LeetCode #230 – Kth Smallest Element in a BST
- Difficulty: Medium
- Status: Completed

**100 Days DSA Challenge – Learning, practicing, and improving every day!**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BinaryTree #InorderTraversal #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins