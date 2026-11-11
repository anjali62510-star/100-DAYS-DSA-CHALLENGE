# Day 91 – Majority Element

## 🚀 100 Days DSA Challenge

**LeetCode Problem:** [169. Majority Element](https://leetcode.com/problems/majority-element/)  
**Difficulty:** Easy  
**Topic:** Array, Hash Table, Boyer-Moore Voting Algorithm  
**Language:** C++

---

## 📌 Problem Statement

Given an array `nums` of size `n`, find and return the **majority element**.

A majority element is an element that appears more than `⌊n / 2⌋` times in the array.

The problem guarantees that a majority element always exists.

### Example 1

**Input:**
```text
nums = [3,2,3]
```

**Output:**
```text
3
```

### Example 2

**Input:**
```text
nums = [2,2,1,1,1,2,2]
```

**Output:**
```text
2
```

---

## 💡 Approach: Boyer-Moore Voting Algorithm

The Boyer-Moore Voting Algorithm finds the majority element in linear time using constant extra space.

We maintain two variables:

- `candidate`: Stores the potential majority element.
- `count`: Tracks the current voting balance of the candidate.

### Algorithm Steps

1. Initialize `candidate = 0` and `count = 0`.
2. Traverse every element in the array.
3. If `count == 0`, select the current element as the new candidate.
4. If the current element equals the candidate, increment `count`.
5. Otherwise, decrement `count`.
6. Return the final candidate.

### Why Does It Work?

The algorithm cancels out different elements against the current candidate.

Since the majority element appears more than half the time, all other elements together cannot cancel all its occurrences.

Therefore, the final candidate is guaranteed to be the majority element.

---

## 🔍 Dry Run

**Input:**
```text
nums = [2,2,1,1,1,2,2]
```

| Current Number | Candidate | Count |
|---|---:|---:|
| 2 | 2 | 1 |
| 2 | 2 | 2 |
| 1 | 2 | 1 |
| 1 | 2 | 0 |
| 1 | 1 | 1 |
| 2 | 1 | 0 |
| 2 | 2 | 1 |

**Final Output:**
```text
2
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};
```

---

## ⏱️ Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | The array is traversed only once. |
| Space Complexity | O(1) | Only two extra variables are used. |

---

## 📚 Key Learnings

- Learned the Boyer-Moore Voting Algorithm.
- Understood candidate selection and vote cancellation.
- Practiced optimizing an array problem.
- Achieved O(n) time complexity and O(1) extra space.
- Understood how the majority-element guarantee makes the algorithm work.

---

## 🎯 Challenge Progress

- **Day:** 91/100
- **Problems Solved:** 91/100
- **Challenge Progress:** 91%
- **Remaining:** 9 Days
- **Language:** C++
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge

---

> "Great things are done by a series of small things brought together." – Vincent van Gogh

---

#100DaysDSA #100DaysOfCode #LeetCode #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins #BoyerMooreVotingAlgorithm #Arrays