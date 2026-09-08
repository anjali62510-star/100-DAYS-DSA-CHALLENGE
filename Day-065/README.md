# Day 65 – LeetCode #622: Design Circular Queue

## Problem

**LeetCode #622 – Design Circular Queue**

**Difficulty:** Medium

## Approach Used: Array + Circular Indexing

The objective was to design a **Circular Queue** without using the built-in queue data structure.

A circular queue follows the **FIFO (First In, First Out)** principle, but unlike a normal queue, the last position is connected back to the first position. This allows us to reuse the empty spaces created after deleting elements.

### Steps:

* Use an array/vector to store the queue elements.
* Maintain a `frontIndex` to keep track of the front element.
* Maintain a `rearIndex` to keep track of the last element.
* Use `count` to track the number of elements currently in the queue.
* When inserting an element, move the rear using circular indexing:
  `rearIndex = (rearIndex + 1) % capacity`
* When deleting an element, move the front using circular indexing:
  `frontIndex = (frontIndex + 1) % capacity`
* `isEmpty()` checks whether `count` is `0`.
* `isFull()` checks whether `count` is equal to the queue capacity.
* `Front()` returns the first element.
* `Rear()` returns the last element.

### Example

📌 **Input:**

`enQueue(1)`
`enQueue(2)`
`enQueue(3)`
`enQueue(4)`
`Rear()`
`isFull()`
`deQueue()`
`enQueue(4)`
`Rear()`

📌 **Output:**

`true`
`true`
`true`
`false`
`3`
`true`
`true`
`true`
`4` ✅

The key learning from today’s problem was understanding how **Circular Queues reuse available space** and how **modulo (%) operation** helps move the front and rear positions circularly.

## Complexity

✅ **Time Complexity:** O(1) for all operations

✅ **Space Complexity:** O(k)

🎯 **65 days completed!** Another step forward in the 100 Days DSA Challenge. Today’s problem strengthened my understanding of **Queues, FIFO, Circular Queues, Array-based implementation, and circular indexing**.

Continuing the journey toward **100 Days of DSA** with consistency and continuous learning! 💻🔥

---

*"Consistency beats intensity."*
