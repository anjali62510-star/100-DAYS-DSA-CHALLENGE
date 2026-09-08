## 🚀 Day 62 – Longest Valid Parentheses

### 📌 LeetCode #32 – Longest Valid Parentheses

**Difficulty:** Hard
**Topic:** Stack
**Language:** C++

### 🧠 Problem

Given a string containing only `(` and `)`, find the length of the longest valid (well-formed) parentheses substring.

### 💡 Approach

Used a **Stack** to store the indices of parentheses.

1. Push `-1` into the stack as the initial base index.
2. Traverse the string from left to right.
3. If the character is `(`, push its index.
4. If the character is `)`, pop the top element.
5. If the stack becomes empty, push the current index as the new base.
6. Otherwise, calculate the valid substring length using `i - st.top()`.
7. Keep updating the maximum length.

### 🔍 Example

**Input:**

```text
s = ")()())"
```

**Output:**

```text
4
```

**Explanation:**
The longest valid parentheses substring is:

```text
()()
```

### ⏱️ Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

### 🎯 Key Learning

Learned how a **Stack with index tracking** can efficiently solve parentheses-related problems in linear time.

### ✅ Progress

**62/100 Days Completed** 🎯🔥
