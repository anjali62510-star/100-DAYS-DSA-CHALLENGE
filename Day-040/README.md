# Day 40 – Valid Anagram

## Problem Details

- **Problem Number:** 242
- **Problem Name:** Valid Anagram
- **Difficulty:** Easy
- **Platform:** LeetCode

---

## Problem Statement

Given two strings `s` and `t`, determine whether `t` is an anagram of `s`.

An **anagram** is a word or phrase formed by rearranging the letters of another word, using all the original letters exactly once.

Return:
- `true` if `t` is an anagram of `s`
- `false` otherwise

---

## Example

**Input:**

```text
s = "anagram"
t = "nagaram"
```

**Output:**

```text
true
```

**Explanation:**

Both strings contain the same characters with exactly the same frequencies.

---

## Approach Used

I solved this problem using a **Frequency Array (Character Counting)**.

### Algorithm

1. Check if both strings have the same length.
   - If not, return `false`.
2. Create a frequency array of size **26** for lowercase English letters.
3. Traverse the first string and increment the frequency of each character.
4. Traverse the second string and decrement the frequency of each character.
5. Check the frequency array:
   - If every value is `0`, the strings are anagrams.
   - Otherwise, return `false`.

### Why It Works

Anagrams contain the same characters the same number of times.

For example:

```text
s = anagram

Frequency:

a → 3
n → 1
g → 1
r → 1
m → 1
```

After processing:

```text
t = nagaram
```

Every frequency becomes:

```text
0
```

Therefore:

```text
true
```

Another example:

```text
s = rat
t = car
```

The frequencies do not balance to zero because:

```text
t → 1
c → -1
```

Hence:

```text
false
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

where `n` is the length of the strings.

The extra space is constant because the frequency array always contains **26** elements.

---

## Key Learning

- Frequency Array
- Character Counting
- Hashing Technique
- String Comparison
- Constant Space Optimization

---

## Status

✅ Accepted on LeetCode

---

## Language

C++