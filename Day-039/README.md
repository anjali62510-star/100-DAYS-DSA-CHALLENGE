# Day 39 – Find the Index of the First Occurrence in a String

## Problem Details

- **Problem Number:** 28
- **Problem Name:** Find the Index of the First Occurrence in a String
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given two strings `haystack` and `needle`, return the index of the **first occurrence** of `needle` in `haystack`. If `needle` is not part of `haystack`, return `-1`.

---

## Example

**Input:**

```text
haystack = "sadbutsad"
needle = "sad"
```

**Output:**

```text
0
```

**Explanation:**

The substring `"sad"` appears at indices `0` and `6`. Since the first occurrence is at index `0`, the answer is `0`.

---

## Approach Used

I solved this problem using **Brute Force Pattern Matching**.

### Algorithm

1. Let:
   - `n` = length of `haystack`
   - `m` = length of `needle`
2. Traverse every possible starting index from `0` to `n - m`.
3. For each starting position, compare the characters of `needle` with the corresponding characters in `haystack`.
4. If all characters match, return the current index.
5. If no match is found after checking all possible positions, return `-1`.

### Why It Works

The algorithm checks every valid substring of length `m` in the `haystack`.

Example:

```text
haystack = sadbutsad
needle   = sad

Index 0

sad
sad
✓ ✓ ✓
```

The first complete match occurs at index **0**, so the answer is:

```text
0
```

For another example:

```text
haystack = leetcode
needle   = leeto
```

Comparison:

```text
leetc
leeto
```

The last character mismatches, and no other valid occurrence exists.

Hence the answer is:

```text
-1
```

---

## Complexity Analysis

- **Time Complexity:** O((n − m + 1) × m) (Worst Case: O(n × m))
- **Space Complexity:** O(1)

where:
- `n` = length of `haystack`
- `m` = length of `needle`

---

## Key Learning

- String Traversal
- Pattern Matching
- Nested Loop Comparison
- Brute Force Search
- Substring Matching

---

## Status

✅ Accepted on LeetCode

---

## Language

C++