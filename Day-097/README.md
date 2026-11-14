# Day 97 – LeetCode 476: Number Complement

**Difficulty:** Easy  
**Topic:** Bit Manipulation, XOR, Bit Masking  
**Language:** C++

## Problem Statement

Given a positive integer `num`, return its complement.

The complement is obtained by flipping all the bits in its binary representation:
- Change `0` to `1`.
- Change `1` to `0`.

**Note:** Ignore leading zeros when calculating the complement.

## Approach: Bit Mask + XOR

We use a bit mask containing all `1`s with the same number of bits as the binary representation of `num`.

### Key Observation

The XOR operator follows these rules:

| Bit | XOR 1 | Result |
|---|---|---|
| 0 | 1 | 1 |
| 1 | 1 | 0 |

Therefore, XOR with a mask of all `1`s flips every relevant bit.

### Algorithm

1. Initialize `mask = 0`.
2. Create a temporary variable `temp = num`.
3. Run a loop while `temp > 0`.
4. Generate the mask using:
   `mask = (mask << 1) | 1`
5. Right-shift `temp` by one position.
6. Finally, return `num ^ mask`.

## C++ Solution

```cpp
class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int temp = num;

        while (temp > 0) {
            // Generate a mask of all 1s
            mask = (mask << 1) | 1;

            // Move to the next bit
            temp >>= 1;
        }

        // Flip the bits using XOR
        return num ^ mask;
    }
};
```

## Dry Run

**Input:**

```text
num = 5
```

Binary representation:

```text
num = 101
```

### Step 1: Generate the Mask

| Step | Operation | Mask |
|---|---|---|
| Initial | 0 | 000 |
| 1 | (0 << 1) \| 1 | 001 |
| 2 | (1 << 1) \| 1 | 011 |
| 3 | (3 << 1) \| 1 | 111 |

### Step 2: Perform XOR

```text
  101
^ 111
-----
  010
```

**Output:**

```text
2
```

The complement of binary `101` is `010`, which equals decimal `2`.

## Complexity Analysis

Let `n` represent the input number.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(log n) | We process each bit of the number once. |
| Space Complexity | O(1) | Only a few variables are used. |

## Key Learnings

- Understood the concept of binary complement.
- Practiced bitwise XOR (`^`).
- Learned left shift (`<<`) and right shift (`>>`) operations.
- Understood how to generate a bit mask.
- Learned how to flip bits without affecting leading zeros.
- Improved problem-solving skills in Bit Manipulation.

## Challenge Progress

- **Day:** 97/100
- **Problems Completed:** 97
- **Days Remaining:** 3
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

> "Three more steps to complete a journey built on consistency and determination!"

#100DaysDSA #100DaysOfCode #LeetCode #476 #NumberComplement #BitManipulation #XOR #BitMasking #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins