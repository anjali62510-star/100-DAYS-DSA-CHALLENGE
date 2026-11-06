# Day 87 – LeetCode #109: Convert Sorted List to Binary Search Tree

**Difficulty:** Medium  
**Topic:** Linked List, Binary Tree, Binary Search Tree, Slow and Fast Pointers, Recursion  
**Language:** C++

---

## Problem Statement

Given the head of a singly linked list where elements are sorted in ascending order, convert it into a height-balanced Binary Search Tree (BST).

A height-balanced BST is a tree in which the heights of the left and right subtrees of every node differ by at most 1.

---

## Approach: Slow and Fast Pointer Technique

We use the slow and fast pointer technique to find the middle node of the linked list.

- Slow pointer moves one step at a time.
- Fast pointer moves two steps at a time.
- When fast reaches the end, slow points to the middle node.

The middle node becomes the root of the BST.

### Steps

1. Check whether the linked list is empty. If yes, return `nullptr`.
2. If only one node is present, create a tree node and return it.
3. Initialize slow, fast, and previous pointers.
4. Move slow by one step and fast by two steps until fast reaches the end.
5. Create a tree node using the middle node's value.
6. Disconnect the left half of the linked list.
7. Recursively construct the left subtree using the first half.
8. Recursively construct the right subtree using the second half.
9. Return the root.

---

## Dry Run

**Input:**

```text
-10 → -3 → 0 → 5 → 9
```

### Step 1: Find the middle element

The middle element is `0`.

It becomes the root of the BST.

### Step 2: Divide the linked list

```text
Left Part:   -10 → -3
Middle:       0
Right Part:   5 → 9
```

### Step 3: Construct the subtrees

- `-3` becomes the left child of `0`.
- `9` becomes the right child of `0`.
- `-10` becomes the left child of `-3`.
- `5` becomes the left child of `9`.

### Final BST

```text
        0
       / \
     -3   9
     /   /
   -10  5
```

**Output:**

```text
[0,-3,9,-10,null,5]
```

---

## C++ Solution

```cpp
class Solution {
public:

    TreeNode* sortedListToBST(ListNode* head) {

        // Base condition: empty list
        if (head == nullptr) {
            return nullptr;
        }

        // If only one node is present
        if (head->next == nullptr) {
            return new TreeNode(head->val);
        }

        // Slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Find the middle node
        while (fast != nullptr && fast->next != nullptr) {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Middle node becomes root
        TreeNode* root = new TreeNode(slow->val);

        // Disconnect left half from middle
        prev->next = nullptr;

        // Build left subtree
        root->left = sortedListToBST(head);

        // Build right subtree
        root->right = sortedListToBST(slow->next);

        return root;
    }
};
```

---

## Complexity Analysis

Let `n` be the number of nodes in the linked list.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n log n) | Finding the middle requires scanning the list at each recursive level. |
| Space Complexity | O(log n) | Recursive call stack for a balanced tree. |

---

## Optimized Approach – Inorder Simulation

Another approach can solve this problem in O(n) time.

Steps:

1. Count the total number of nodes.
2. Recursively construct the left subtree using half the nodes.
3. Use the current linked-list node as the root.
4. Move the linked-list pointer to the next node.
5. Construct the right subtree using the remaining nodes.

This visits each linked-list node once.

---

## Key Learnings

- Learned how to convert a sorted linked list into a height-balanced BST.
- Practiced the slow and fast pointer technique.
- Understood why the middle element is selected as the root.
- Learned how to divide a linked list into smaller parts using recursion.
- Strengthened understanding of linked lists and binary trees together.

---

## Progress

- Day: 87/100
- Problem: LeetCode #109 – Convert Sorted List to Binary Search Tree
- Difficulty: Medium
- Status: Completed

**100 Days DSA Challenge – One problem at a time, one day at a time!**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #LinkedList #BinaryTree #BinarySearchTree #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins