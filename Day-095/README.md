# Day 95 – LeetCode 461: Hamming Distance

**Difficulty:** Easy  
**Topic:** Bit Manipulation, XOR  
**Language:** C++

## Problem Statement

The Hamming Distance between two integers is the number of positions at which their corresponding binary bits are different.

Given two integers `x` and `y`, return their Hamming Distance.

## Approach: XOR + Brian Kernighan's Algorithm

We use XOR (`^`) to identify the positions where the bits are different.

### Key Observation

The XOR operator follows these rules:

| Bit 1 | Bit 2 | XOR Result |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

Therefore:

```cpp
int n = x ^ y;
```

The result contains `1` wherever the corresponding bits of `x` and `y` are different.

Next, we use Brian Kernighan's Algorithm to count the set bits.

```cpp
n = n & (n - 1);
```

This operation removes the rightmost set bit in every iteration.

## Algorithm

1. Calculate XOR of `x` and `y`.
2. Initialize `count = 0`.
3. Run a loop while the XOR result is not zero.
4. Remove the rightmost set bit using `n & (n - 1)`.
5. Increment the counter.
6. Return the counter.

## C++ Solution

```cpp
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int count = 0;

        while (n != 0) {
            // Remove the rightmost set bit
            n = n & (n - 1);

            // Count the different bit position
            count++;
        }

        return count;
    }
};
```

## Dry Run

**Input:**

```text
x = 1
y = 4
```

Binary representation:

```text
x = 001
y = 100
    ---
XOR 101
```

Now count the set bits:

| Step | Binary Number | Operation | Count |
|---|---|---|---:|
| Initial | 101 | XOR result | 0 |
| 1 | 100 | Remove rightmost 1 | 1 |
| 2 | 000 | Remove rightmost 1 | 2 |

**Output:**

```text
2
```

There are two positions where the corresponding bits are different.

## Complexity Analysis

Let `k` be the number of set bits in `x ^ y`.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(k) | Each iteration removes one set bit. |
| Space Complexity | O(1) | Only a few variables are used. |

## Alternative Approach: Simple Bit Checking

We can also count different bits by checking the last bit and right-shifting the number.

```cpp
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int count = 0;

        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }

        return count;
    }
};
```

This approach checks each bit position individually.

## Key Learnings

- Understood the concept of Hamming Distance.
- Learned how XOR identifies different bit positions.
- Practiced Brian Kernighan's Algorithm.
- Understood how `n & (n - 1)` removes the rightmost set bit.
- Learned two approaches to count set bits.
- Improved problem-solving skills in Bit Manipulation.

## Challenge Progress

- **Day:** 95/100
- **Problems Completed:** 95
- **Days Remaining:** 5
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

> "Every problem solved is another step towards mastery."

#100DaysDSA #100DaysOfCode #LeetCode #461 #HammingDistance #BitManipulation #XOR #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins