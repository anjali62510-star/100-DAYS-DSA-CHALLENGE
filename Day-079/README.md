# Day 79 – LeetCode #100: Same Tree

## 🧩 Problem

Given the roots of two binary trees `p` and `q`, check whether the two trees are **the same or not**.

Two binary trees are considered the same when:

* They have the **same structure**.
* Corresponding nodes have the **same values**.

### Example 1

**Input:**

```text
p = [1,2,3]
q = [1,2,3]
```

**Output:**

```text
true
```

Both trees have the same structure and the same values.

---

## 💡 Approach Used

### Recursion

We compare both trees **node by node**.

For every pair of corresponding nodes:

1. If both nodes are `nullptr`, they are the same.
2. If only one node is `nullptr`, the trees are different.
3. If their values are different, the trees are different.
4. Otherwise, recursively compare:

   * The left subtrees.
   * The right subtrees.

Only when both subtrees are the same do we return `true`.

---

## 🧠 Steps

1. Start with the roots `p` and `q`.
2. Check if both are `nullptr`.

   * If yes → return `true`.
3. Check if only one is `nullptr`.

   * If yes → return `false`.
4. Compare their values.

   * If values are different → return `false`.
5. Recursively compare the left subtrees.
6. Recursively compare the right subtrees.
7. Return `true` only if both comparisons return `true`.

---

## 🔍 Dry Run

Consider:

```text
Tree P:       1          Tree Q:       1
             / \                      / \
            2   3                    2   3
```

### Step 1

Compare root nodes:

```text
1 == 1
```

✅ Same

### Step 2

Compare left nodes:

```text
2 == 2
```

✅ Same

### Step 3

Compare right nodes:

```text
3 == 3
```

✅ Same

### Step 4

Both trees have the same structure and values.

**Result:**

```text
true
```

---

## 📌 Example 2

**Input:**

```text
p = [1,2]
q = [1,null,2]
```

The trees are:

```text
P:        1             Q:        1
         /                       \
        2                         2
```

The root values are the same, but their structures are different.

**Output:**

```text
false
```

---

## 📌 Example 3

**Input:**

```text
p = [1,2,1]
q = [1,1,2]
```

The structures may be the same, but corresponding node values are different.

**Output:**

```text
false
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both nodes are empty
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // One node is empty and the other is not
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // Values are different
        if (p->val != q->val) {
            return false;
        }

        // Compare left and right subtrees
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
```

---

## ⏱️ Complexity

### Time Complexity: O(n)

Each corresponding node is checked once.

### Space Complexity: O(h)

The recursive calls use space according to the height of the tree.

* Balanced tree → `O(log n)`
* Skewed tree → `O(n)`

---

## 📚 Key Learnings

* Learned how to compare two binary trees recursively.
* Understood that **both structure and values** must match.
* Practiced checking `nullptr` conditions in recursion.
* Strengthened my understanding of recursive tree traversal.
* Learned how `&&` can be used to ensure both subtrees are identical.

---

## 🔥 Day 79/100 Completed!

**Problem:** LeetCode #100 – Same Tree
**Difficulty:** Easy
**Topic:** Binary Tree, Recursion

```text
79 / 100 Days Completed
21 Days Remaining 🔥
```

> **Consistency beats intensity.**

#100DaysDSA #100DaysOfCode #LeetCode #DSA #BinaryTree #Recursion #Cpp #ProblemSolving #CodingJourney #DrGViswanathan #Day79 #InterviewPreparation #ConsistencyWins
