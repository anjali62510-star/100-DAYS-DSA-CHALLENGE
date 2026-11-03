# Day 84 – LeetCode #450: Delete Node in a BST

## 🧩 Problem

Given the root of a Binary Search Tree (BST) and an integer `key`, delete the node containing the given key and return the updated root.

After deletion, the Binary Search Tree property must be maintained.

### 📌 BST Property

- Values smaller than the current node are stored in the left subtree.
- Values greater than the current node are stored in the right subtree.

---

## 💡 Approach Used

### BST Property + Recursion + Inorder Successor

We first search for the node that needs to be deleted using the BST property.

Once the node is found, deletion is handled using three cases:

**Case 1: Node has no children**
- Delete the node.
- Return `nullptr`.

**Case 2: Node has one child**
- Replace the node with its existing child.
- Return that child.

**Case 3: Node has two children**
- Find the inorder successor (smallest node in the right subtree).
- Copy its value into the node to be deleted.
- Delete the original inorder successor from the right subtree.

---

## 🧠 Steps

1. Start searching from the root.
2. If the root is `nullptr`, return `nullptr`.
3. If the key is smaller than the current node, recursively search the left subtree.
4. If the key is greater, recursively search the right subtree.
5. If the key matches the current node:
   - If there is no left child, replace the node with its right child.
   - If there is no right child, replace the node with its left child.
   - If both children exist, find the inorder successor.
6. Copy the successor's value into the current node.
7. Delete the original successor node.
8. Return the updated root.

---

## 🔍 Dry Run

**Input:**

```text
root = [5,3,6,2,4,null,7]
key = 3
```

Initial BST:

```text
        5
       / \
      3   6
     / \   \
    2   4   7
```

### Step 1: Search for the key

Current node = `5`

Since `3 < 5`, move to the left subtree.

### Step 2: Find the node

Current node = `3`

The key is found.

Node `3` has two children:
- Left child = `2`
- Right child = `4`

### Step 3: Find the inorder successor

The smallest node in the right subtree is `4`.

### Step 4: Replace the value

Replace `3` with `4`.

Then delete the original node containing `4`.

### Final BST

```text
        5
       / \
      4   6
     /     \
    2       7
```

**Output:**

```text
[5,4,6,2,null,null,7]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        // If tree is empty or key is not found
        if (root == nullptr) {
            return nullptr;
        }

        // Search in left subtree
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }

        // Search in right subtree
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        // Node to be deleted is found
        else {

            // Case 1: No left child
            if (root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // Case 2: No right child
            if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 3: Two children
            TreeNode* successor = root->right;

            // Find smallest node in right subtree
            while (successor->left != nullptr) {
                successor = successor->left;
            }

            // Copy successor value
            root->val = successor->val;

            // Delete original successor
            root->right = deleteNode(root->right, successor->val);
        }

        return root;
    }
};
```

---

## ⏱️ Complexity Analysis

### Time Complexity: O(h)

We search for the node and find its inorder successor by following paths in the BST.

Here, `h` represents the height of the tree.

- Balanced BST: O(log n)
- Skewed BST: O(n)

### Space Complexity: O(h)

Recursive function calls use extra space depending on the height of the tree.

---

## 📚 Key Learnings

- Learned how to delete a node from a Binary Search Tree.
- Understood all three cases of BST deletion.
- Practiced finding the inorder successor.
- Learned how to replace a node while maintaining the BST property.
- Improved understanding of recursion and tree manipulation.

---

## 🔥 Day 84/100 Completed!

**Problem:** LeetCode #450 – Delete Node in a BST  
**Difficulty:** Medium  
**Topics:** Binary Search Tree, Recursion, Inorder Successor

**84/100 Days Completed | 16 Days Remaining!**

> Consistency beats intensity.

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinarySearchTree #BST #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #ConsistencyWins
