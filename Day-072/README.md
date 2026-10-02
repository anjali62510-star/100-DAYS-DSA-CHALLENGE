# Day 72 – LeetCode #102: Binary Tree Level Order Traversal

## 📌 Problem

Given the root of a binary tree, return the **level order traversal** of its nodes' values.

Level order traversal means visiting the nodes **level by level**, from **left to right**.

---

## 🟡 Difficulty

**Medium**

---

## 💡 Approach

### Breadth-First Search (BFS) + Queue

We use a **Queue** to traverse the binary tree level by level.

A queue follows the **FIFO (First In, First Out)** principle.

The important idea is to store the number of nodes present at the current level using:

```text
size = q.size()
```

This allows us to process one complete level at a time.

---

## 🔍 Step-by-Step

```text
1. If root is NULL, return an empty result.
2. Create a queue and insert the root node.
3. While the queue is not empty:
   a. Store the current queue size.
   b. Create an empty vector for the current level.
   c. Process exactly 'size' nodes.
   d. Add each node's value to the current level.
   e. Add its left child to the queue if it exists.
   f. Add its right child to the queue if it exists.
   g. Add the current level to the result.
4. Return the result.
```

---

## 🧪 Example 1

### Input

```text
root = [3,9,20,null,null,15,7]
```

Tree:

```text
        3
       / \
      9   20
         /  \
        15   7
```

### Level-by-Level Traversal

```text
Level 1 → [3]
Level 2 → [9, 20]
Level 3 → [15, 7]
```

### Output

```text
[[3],[9,20],[15,7]]
```

---

## 🧪 Example 2

### Input

```text
root = [1]
```

Tree:

```text
    1
```

### Output

```text
[[1]]
```

---

## 🧪 Example 3

### Input

```text
root = []
```

Since the tree is empty:

### Output

```text
[]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        // If tree is empty
        if (root == nullptr) {
            return result;
        }

        // Queue for BFS traversal
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            // Number of nodes in current level
            int size = q.size();

            vector<int> level;

            for (int i = 0; i < size; i++) {

                // Get the front node
                TreeNode* current = q.front();
                q.pop();

                // Add node value to current level
                level.push_back(current->val);

                // Add left child
                if (current->left != nullptr) {
                    q.push(current->left);
                }

                // Add right child
                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }

            // Add current level to result
            result.push_back(level);
        }

        return result;
    }
};
```

---

## 🧠 Dry Run

For:

```text
        3
       / \
      9   20
         /  \
        15   7
```

### Initial Queue

```text
[3]
```

### Level 1

Remove `3`.

```text
Current Level = [3]
Queue = [9, 20]
```

### Level 2

Remove `9` and `20`.

```text
Current Level = [9, 20]
Queue = [15, 7]
```

### Level 3

Remove `15` and `7`.

```text
Current Level = [15, 7]
Queue = []
```

Final result:

```text
[[3],[9,20],[15,7]]
```

---

## ⏱️ Complexity

### Time Complexity

```text
O(n)
```

Every node is visited exactly once.

### Space Complexity

```text
O(n)
```

The queue can contain multiple nodes from a level, and the result also stores all node values.

---

## 🎯 Key Learning

Today's problem strengthened my understanding of:

* Binary Trees
* Breadth-First Search (BFS)
* Queues
* Level Order Traversal
* Tree Traversal

### Important Pattern

Whenever we need to process a binary tree **level by level**, think:

```text
BFS + Queue
```

The key trick is:

```text
size = q.size()
```

This tells us exactly how many nodes belong to the current level.

---

## 🔥 Challenge Progress

**Day 72/100 completed!**

72 days of consistent DSA practice completed. 🚀

> Consistency beats intensity.

Continuing the journey toward **100 Days of DSA**! 💻🌳🔥
