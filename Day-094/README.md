# Day 94 – LeetCode 191: Number of 1 Bits

**Difficulty:** Easy  
**Topic:** Bit Manipulation  
**Language:** C++

## Problem Statement

Given a positive integer `n`, return the number of set bits (`1`s) in its binary representation.

The number of set bits is also known as the **Hamming Weight**.

## Approach: Brian Kernighan's Algorithm

We use the bitwise AND operator (`&`) to remove the rightmost set bit in every iteration.

### Key Observation

```cpp
n = n & (n - 1);
```

This operation removes the rightmost `1` from the binary representation of `n`.

We repeat this operation until `n` becomes zero.

The number of iterations gives the total number of set bits.

### Algorithm

1. Initialize a counter `count = 0`.
2. Run a loop while `n != 0`.
3. Perform `n = n & (n - 1)` to remove the rightmost set bit.
4. Increment `count`.
5. Return `count` when the loop ends.

## C++ Solution

```cpp
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n != 0) {

            // Remove the rightmost set bit
            n = n & (n - 1);

            // Count the removed set bit
            count++;
        }

        return count;
    }
};
```

## Dry Run

**Input:**
```text
n = 11
```

Binary representation:

```text
11 = 1011
```

| Step | Binary Number | Operation | Count |
|---|---|---|---:|
| Initial | 1011 | — | 0 |
| 1 | 1010 | Remove rightmost 1 | 1 |
| 2 | 1000 | Remove rightmost 1 | 2 |
| 3 | 0000 | Remove rightmost 1 | 3 |

**Output:**
```text
3
```

The binary representation `1011` contains three set bits.

## Complexity Analysis

Let `k` be the number of set bits in the binary representation.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(k) | Each iteration removes one set bit. |
| Space Complexity | O(1) | Only a counter is used. |

## Follow-up: Multiple Function Calls

If this function is called many times, we can optimize it using a **lookup table**.

- Precompute the number of set bits for smaller groups of bits.
- Divide each number into smaller groups.
- Use the lookup table to calculate the total number of set bits.

This reduces repeated bit manipulation operations across multiple calls.

## Key Learnings

- Understood set bits and Hamming Weight.
- Learned Brian Kernighan's Algorithm.
- Practiced bitwise AND (`&`) operations.
- Understood how `n & (n - 1)` removes the rightmost set bit.
- Learned an efficient way to count set bits without checking every bit position.

## Challenge Progress

- **Day:** 94/100
- **Problems Completed:** 94
- **Days Remaining:** 6
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

> "Consistency is the key to turning small efforts into big achievements."

#100DaysDSA #100DaysOfCode #LeetCode #191 #NumberOf1Bits #BitManipulation #HammingWeight #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins