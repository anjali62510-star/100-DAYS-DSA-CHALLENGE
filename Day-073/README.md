# Day 73 – LeetCode #199: Binary Tree Right Side View

## 📌 Problem

Given the root of a binary tree, imagine yourself standing on the **right side** of the tree.

Return the values of the nodes that are visible from the right side, ordered from **top to bottom**.

---

## 🟡 Difficulty

**Medium**

---

## 💡 Approach

### Breadth-First Search (BFS) + Queue

We can solve this problem using **BFS (Breadth-First Search)**.

We traverse the tree **level by level** using a queue.

At every level, the **last node** we process is the node visible from the right side.

### Main Idea

```text
For every level:
    Process all nodes
    Take the last node
```

---

## 🔍 Step-by-Step

```text
1. If root is NULL, return an empty result.
2. Create a queue and insert the root.
3. While the queue is not empty:
   a. Store the number of nodes in the current level.
   b. Process all nodes of that level.
   c. If a node is the last node of the level,
      add its value to the result.
   d. Add its left child to the queue if it exists.
   e. Add its right child to the queue if it exists.
4. Return the result.
```

---

## 🧪 Example 1

### Input

```text
root = [1,2,3,null,5,null,4]
```

Tree:

```text
        1
       / \
      2   3
       \   \
        5   4
```

### Level-by-Level Traversal

```text
Level 1 → [1]
Level 2 → [2,3]
Level 3 → [5,4]
```

The rightmost node of every level is:

```text
1 → 3 → 4
```

### Output

```text
[1,3,4]
```

---

## 🧪 Example 2

### Input

```text
root = [1,2,3,4,null,null,null,5]
```

Tree:

```text
        1
       / \
      2   3
     /
    4
   /
  5
```

The visible nodes from the right side are:

```text
1 → 3 → 4 → 5
```

### Output

```text
[1,3,4,5]
```

---

## 🧪 Example 3

### Input

```text
root = [1,null,3]
```

Tree:

```text
    1
     \
      3
```

### Output

```text
[1,3]
```

---

## 🧪 Example 4

### Input

```text
root = []
```

The tree is empty.

### Output

```text
[]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;

        // If tree is empty
        if (root == nullptr) {
            return result;
        }

        // Queue for BFS
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            // Number of nodes in current level
            int size = q.size();

            for (int i = 0; i < size; i++) {

                TreeNode* current = q.front();
                q.pop();

                // Last node of this level is visible
                if (i == size - 1) {
                    result.push_back(current->val);
                }

                // Add left child
                if (current->left != nullptr) {
                    q.push(current->left);
                }

                // Add right child
                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }
        }

        return result;
    }
};
```

---

## 🧠 Dry Run

Consider:

```text
        1
       / \
      2   3
       \   \
        5   4
```

### Initial Queue

```text
[1]
```

### Level 1

Process:

```text
1
```

`1` is the last node of the level.

```text
Result = [1]
Queue = [2,3]
```

### Level 2

Process:

```text
2 → 3
```

`3` is the last node of the level.

```text
Result = [1,3]
Queue = [5,4]
```

### Level 3

Process:

```text
5 → 4
```

`4` is the last node of the level.

```text
Result = [1,3,4]
Queue = []
```

### Final Answer

```text
[1,3,4]
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

The queue can contain nodes from a level of the tree.

---

## 🧠 Key Learning

Today's problem strengthened my understanding of:

* Binary Trees
* Breadth-First Search (BFS)
* Queues
* Level Order Traversal
* Tree Visibility Problems

### Important Pattern

For **Right Side View** using BFS:

```text
Traverse level by level
        ↓
Take the LAST node of each level
        ↓
Right Side View
```

This is closely related to **LeetCode #102 – Binary Tree Level Order Traversal**, but instead of storing every node of every level, we only store the **last node of each level**.

---

## 🎯 Challenge Progress

**Day 73/100 completed! 🔥**

Another Binary Tree problem completed and another step forward in the DSA journey.

> Consistency beats intensity.

Continuing toward **100 Days of DSA**! 🚀💻🌳
