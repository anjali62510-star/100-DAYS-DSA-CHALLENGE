# Day 36 – Maximum Number of Vowels in a Substring of Given Length

## Problem Details

- **Problem Number:** 1456
- **Problem Name:** Maximum Number of Vowels in a Substring of Given Length
- **Difficulty:** Medium
- **Platform:** LeetCode

---

## Problem Statement

Given a string `s` and an integer `k`, return the maximum number of vowel letters present in any substring of length `k`.

The vowels are:
- `a`
- `e`
- `i`
- `o`
- `u`

---

## Example

**Input:**

```text
s = "abciiidef"
k = 3
```

**Output:**

```text
3
```

**Explanation:**

The substring `"iii"` contains **3 vowels**, which is the maximum among all substrings of length `3`.

---

## Approach Used

I solved this problem using the **Sliding Window** technique.

### Algorithm

1. Count the number of vowels in the first window of size `k`.
2. Store this count as the initial answer.
3. Slide the window one character at a time.
4. If the new character entering the window is a vowel, increment the count.
5. If the character leaving the window is a vowel, decrement the count.
6. Update the maximum vowel count after each window shift.
7. Return the maximum count.

### Why It Works

Instead of counting vowels separately for every substring, the Sliding Window updates the count by considering only the entering and exiting characters.

For example:

```text
s = "abciiidef"
k = 3

Windows:
abc → 1 vowel
bci → 1 vowel
cii → 2 vowels
iii → 3 vowels ✅
iid → 2 vowels
ide → 2 vowels
def → 1 vowel
```

Maximum vowels = **3**

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the length of the string.

---

## Key Learning

- Sliding Window Technique
- Fixed-Size Window
- Efficient String Traversal
- Incremental Count Updates
- Constant Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++