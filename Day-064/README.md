# Day 63 – Implement Stack using Queues

## Problem

**LeetCode #225 – Implement Stack using Queues**

**Difficulty:** Easy

## Approach Used: Queue

The objective is to implement a **Stack (LIFO)** using only **Queue (FIFO)** operations.

A stack follows **Last In, First Out (LIFO)**, while a queue follows **First In, First Out (FIFO)**.

To simulate stack behavior, I used two queues.

### Steps:

* Push the new element into the first queue.
* Move all existing elements behind the new element.
* This makes the newly inserted element come to the front of the queue.
* For `pop()`, remove the front element.
* For `top()`, return the front element.
* For `empty()`, check whether the queue is empty.

### Example

📌 **Input:**

`["MyStack", "push", "push", "top", "pop", "empty"]`

📌 **Operations:**

`push(1)`
`push(2)`
`top()`
`pop()`
`empty()`

📌 **Output:**

`[null, null, null, 2, 2, false]` ✅

The key learning from today's problem was understanding how a **Queue can be rearranged to behave like a Stack** and how FIFO operations can be used to implement LIFO behavior.

## Complexity

✅ **Time Complexity:** O(n) for `push()`

✅ **Space Complexity:** O(n)

## Key Learning

Today's problem strengthened my understanding of **Stack and Queue data structures**, especially the difference between **LIFO and FIFO** and how one data structure can be implemented using another.

🎯 **63 days completed!**

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🔥

---

*"Consistency beats intensity."*
