# Day 77 – LeetCode #103: Binary Tree Zigzag Level Order Traversal

## 🧩 Problem

Given the root of a binary tree, return the **zigzag level order traversal** of its nodes' values.

In normal level order traversal, we visit each level from **left to right**.

In zigzag traversal:

* First level → Left to Right
* Second level → Right to Left
* Third level → Left to Right
* And so on...

### Example

**Input:**

```text
       3
      / \
     9   20
        /  \
       15   7
```

**Output:**

```text
[[3],[20,9],[15,7]]
```

---

## 💡 Approach Used

### BFS (Breadth-First Search) + Queue

We use a **queue** to process the binary tree level by level.

The main idea is:

1. Put the root into the queue.
2. Process all nodes belonging to the current level.
3. Store their values in a temporary `level` array.
4. If the direction is left-to-right, store normally.
5. If the direction is right-to-left, store the values in reverse positions.
6. Change the direction after every level.

We use a boolean variable:

```cpp
bool leftToRight = true;
```

After processing each level:

```cpp
leftToRight = !leftToRight;
```

This switches the traversal direction.

---

## 🧠 Steps

1. Create an empty `result` vector.
2. If the tree is empty, return the result.
3. Create a queue and push the root.
4. While the queue is not empty:

   * Find the number of nodes in the current level.
   * Create a vector `level` of that size.
   * Process every node of the current level.
5. If `leftToRight` is `true`:

   ```cpp
   index = i;
   ```
6. Otherwise:

   ```cpp
   index = size - 1 - i;
   ```
7. Store the node value at the calculated index.
8. Add the left and right children to the queue.
9. Add the current level to `result`.
10. Reverse the direction for the next level.
11. Return the final result.

---

## 🔍 Dry Run

Consider:

```text
       3
      / \
     9   20
        /  \
       15   7
```

### Level 1

Queue:

```text
[3]
```

Direction:

```text
Left → Right
```

Level:

```text
[3]
```

Result:

```text
[[3]]
```

---

### Level 2

Queue:

```text
[9, 20]
```

Direction:

```text
Right → Left
```

Normal order:

```text
[9, 20]
```

Zigzag order:

```text
[20, 9]
```

Result:

```text
[[3], [20, 9]]
```

---

### Level 3

Queue:

```text
[15, 7]
```

Direction:

```text
Left → Right
```

Level:

```text
[15, 7]
```

Final result:

```text
[[3], [20, 9], [15, 7]]
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (root == nullptr) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();

            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* current = q.front();
                q.pop();

                int index;

                if (leftToRight) {
                    index = i;
                } else {
                    index = size - 1 - i;
                }

                level[index] = current->val;

                if (current->left != nullptr) {
                    q.push(current->left);
                }

                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }

            result.push_back(level);

            leftToRight = !leftToRight;
        }

        return result;
    }
};
```

---

## ⏱️ Complexity

### Time Complexity: O(n)

Every node of the binary tree is visited exactly once.

### Space Complexity: O(n)

The queue and the result vector can store up to `n` nodes/values.

---

## 📚 Key Learnings

* Learned how to perform **BFS on a binary tree**.
* Understood how a **queue** helps process a tree level by level.
* Learned how to alternate traversal direction for zigzag order.
* Practiced using a boolean flag to switch between two directions.
* Improved understanding of **level order traversal**.

---

## 🔥 Day 77/100 Completed!

**Problem:** LeetCode #103 – Binary Tree Zigzag Level Order Traversal
**Difficulty:** Medium
**Topic:** Binary Tree, BFS, Queue

### Progress

```text
77 / 100 Days Completed
23 Days Remaining 🔥
```

> **Consistency beats intensity.**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinaryTree #BFS #Queue #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #Day77 #InterviewPreparat
