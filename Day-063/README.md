# Day 63 – Basic Calculator

## 📌 LeetCode #224 – Basic Calculator

**Difficulty:** Hard
**Topic:** Stack
**Language:** C++

### 🧠 Problem

Given a string `s` representing a valid mathematical expression containing digits, `+`, `-`, `(`, `)` and spaces, evaluate the expression without using built-in functions such as `eval()`.

### 💡 Approach Used: Stack

A **Stack** is used to handle expressions inside parentheses.

### Steps:

* Traverse the string character by character.
* Build the complete number when digits are encountered.
* Use `sign = 1` for `+` and `sign = -1` for `-`.
* When `(` is encountered, store the current result and sign in the stack.
* When `)` is encountered, calculate the expression inside the parentheses and combine it with the previous result.
* Ignore spaces.
* Finally, add the last number to the result.

### 🔍 Example

**Input:**

```text
s = "(1+(4+5+2)-3)+(6+8)"
```

**Output:**

```text
23
```

### ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

### 🎯 Key Learning

Today's problem helped me understand how **Stack data structures can be used to handle nested expressions and parentheses** efficiently.

It also strengthened my understanding of **sign handling, expression evaluation, and stack-based problem solving**.

### ✅ Progress

**63/100 Days Completed** 🚀🔥
