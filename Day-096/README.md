# Day 96 – LeetCode 136: Single Number

**Difficulty:** Easy  
**Topic:** Bit Manipulation, XOR  
**Language:** C++

## Problem Statement

Given a non-empty array of integers `nums`, every element appears twice except for one element that appears exactly once.

Find and return the element that appears only once.

The solution must have linear runtime complexity and use only constant extra space.

## Approach: XOR (Bit Manipulation)

We use the XOR (`^`) operator to find the unique element.

### Key XOR Properties

1. `a ^ a = 0` – XOR of the same numbers is zero.
2. `a ^ 0 = a` – XOR with zero keeps the number unchanged.
3. `a ^ b = b ^ a` – XOR is commutative.
4. `(a ^ b) ^ c = a ^ (b ^ c)` – XOR is associative.

**Main Idea:**

Since every number appears twice, the duplicate numbers cancel each other when XOR is applied.

Only the unique number remains.

## Algorithm

1. Initialize `ans = 0`.
2. Traverse the entire array.
3. XOR each element with `ans`.
4. After processing all elements, return `ans`.

## C++ Solution

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};
```

## Dry Run

**Input:**

```text
nums = [4, 1, 2, 1, 2]
```

| Step | Operation | ans |
|---|---|---:|
| Initial | 0 | 0 |
| 1 | 0 ^ 4 | 4 |
| 2 | 4 ^ 1 | 5 |
| 3 | 5 ^ 2 | 7 |
| 4 | 7 ^ 1 | 6 |
| 5 | 6 ^ 2 | 4 |

**Output:**

```text
4
```

The duplicate elements cancel each other, leaving `4` as the unique number.

## Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | We traverse the array once. |
| Space Complexity | O(1) | Only one extra variable is used. |

## Key Learnings

- Understood the XOR operator and its properties.
- Learned how XOR cancels duplicate elements.
- Practiced solving array problems using Bit Manipulation.
- Avoided using an additional hash map or sorting.
- Learned how to achieve O(n) time and O(1) extra space.

## Challenge Progress

- **Day:** 96/100
- **Problems Completed:** 96
- **Days Remaining:** 4
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

> "Consistency turns small daily improvements into remarkable achievements."

#100DaysDSA #100DaysOfCode #LeetCode #136 #SingleNumber #BitManipulation #XOR #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins