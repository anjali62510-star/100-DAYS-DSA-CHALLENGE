# Day 33 – Longest Common Prefix

## Problem Details

- **Problem Number:** 14
- **Problem Name:** Longest Common Prefix
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given an array of strings `strs`, return the **longest common prefix** among all the strings.

If there is no common prefix, return an empty string `""`.

### Example

**Input:**

strs = ["flower","flow","flight"]

**Output:**

"fl"

**Explanation:**

The longest prefix common to all strings is `"fl"`.

---

## Approach Used

I solved this problem using the **Horizontal Scanning** technique.

### Algorithm

1. Assume the first string is the common prefix.
2. Compare the prefix with each remaining string.
3. If the current string does not start with the prefix:
   - Remove the last character from the prefix.
   - Continue until it matches or becomes empty.
4. Repeat for every string.
5. Return the final prefix.

### Why It Works

The common prefix can only become **shorter** as more strings are compared. By continuously shrinking the prefix whenever a mismatch occurs, we efficiently find the longest common prefix shared by all strings.

For example:

```text
Initial Prefix = "flower"

Compare with "flow"
flower ❌
flowe  ❌
flow   ✅

Prefix = "flow"

Compare with "flight"
flow ❌
flo  ❌
fl   ✅

Answer = "fl"
```

---

## Complexity Analysis

- **Time Complexity:** O(n × m)
  - `n` = number of strings
  - `m` = length of the shortest string
- **Space Complexity:** O(1)

---

## Key Learning

- Horizontal Scanning
- String Prefix Matching
- Incremental Prefix Reduction
- Efficient String Comparison
- Greedy String Processing

---

## Status

✅ Accepted on LeetCode

---

## Language

C++