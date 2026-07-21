# Day 37 – Greatest Common Divisor of Strings

## Problem Details

- **Problem Number:** 1071
- **Problem Name:** Greatest Common Divisor of Strings
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

For two strings `str1` and `str2`, a string `x` is said to divide both strings if both can be formed by concatenating `x` one or more times.

Return the **largest string** that divides both `str1` and `str2`. If no such string exists, return an empty string.

---

## Example

**Input:**

```text
str1 = "ABCABC"
str2 = "ABC"
```

**Output:**

```text
ABC
```

**Explanation:**

`"ABC"` repeated twice forms `"ABCABC"` and repeated once forms `"ABC"`.

---

## Approach Used

I solved this problem using **Concatenation Check + Greatest Common Divisor (GCD)**.

### Algorithm

1. Check whether:
   ```cpp
   str1 + str2 == str2 + str1
   ```
2. If the concatenated strings are different, return an empty string because no common divisor exists.
3. Compute the GCD of the lengths of `str1` and `str2`.
4. Return the prefix of `str1` whose length equals the calculated GCD.

### Why It Works

If two strings are built from the same repeating pattern, concatenating them in different orders produces the same result.

Example:

```text
str1 = ABCABC
str2 = ABC

str1 + str2 = ABCABCABC
str2 + str1 = ABCABCABC
```

Since both concatenations are equal:

```text
gcd(6, 3) = 3
```

The first **3** characters of `str1` are:

```text
ABC
```

which is the largest common divisor string.

---

## Complexity Analysis

- **Time Complexity:** O(n + m)
- **Space Complexity:** O(n + m)

where:
- `n` = length of `str1`
- `m` = length of `str2`

---

## Key Learning

- Greatest Common Divisor (GCD)
- String Concatenation Property
- Prefix Extraction
- Mathematical Optimization
- Pattern Recognition

---

## Status

✅ Accepted on LeetCode

---

## Language

C++