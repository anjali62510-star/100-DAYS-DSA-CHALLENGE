# Day 38 – Lexicographically Smallest Palindrome

## Problem Details

- **Problem Number:** 2697
- **Problem Name:** Lexicographically Smallest Palindrome
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given a string `s` consisting of lowercase English letters, you can replace any character with another lowercase English letter.

Your task is to:
- Make the string a palindrome using the **minimum number of operations**.
- If multiple palindromes are possible with the minimum operations, return the **lexicographically smallest** one.

---

## Example

**Input:**

```text
s = "egcfe"
```

**Output:**

```text
efcfe
```

**Explanation:**

Only one replacement is needed.
Replace `'g'` with `'f'` to obtain the smallest possible palindrome.

---

## Approach Used

I solved this problem using the **Two Pointer + Greedy** approach.

### Algorithm

1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. Compare characters at both pointers.
3. If they are different:
   - Replace both characters with the smaller of the two.
4. Move both pointers toward the center.
5. Continue until the pointers meet or cross.
6. Return the modified string.

### Why It Works

Every mismatched pair requires exactly **one operation** to become equal.

Choosing the **smaller character** ensures:
- Minimum number of replacements.
- Lexicographically smallest palindrome.

Example:

```text
Input:

abcd

Compare:
a vs d → choose a

b vs c → choose b

Result:

abba
```

Another example:

```text
egcfe

e == e

g vs f → choose f

Result:

efcfe
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the length of the string.

---

## Key Learning

- Two Pointer Technique
- Greedy Algorithm
- Lexicographical Ordering
- Palindrome Construction
- String Manipulation

---

## Status

✅ Accepted on LeetCode

---

## Language

C++