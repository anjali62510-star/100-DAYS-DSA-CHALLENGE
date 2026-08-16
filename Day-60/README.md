
# Day 60 – Valid Parenthesis String

## Problem Details

- **Problem Number:** 678
- **Problem Name:** Valid Parenthesis String
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Topic:** Greedy
- **Language:** C++

## Problem Statement

Given a string containing `(`, `)` and `*`, determine whether the string can be made valid.

The `*` character can represent:

- `(`
- `)`
- Empty string

## Approach

I used a **Greedy Range** approach.

Two variables are maintained:

- `low` → minimum possible number of unmatched `(`
- `high` → maximum possible number of unmatched `(`

### For `(`

```text
low++
high++
```

### For `)`

```text
low--
high--
```

### For `*`

Since `*` can be either `(`, `)` or empty:

```text
low--
high++
```

If `high < 0`, there are too many closing brackets, so the string is invalid.

If `low < 0`, reset it to `0`.

At the end, if `low == 0`, the string can be valid.

## Example

Input:

```text
s = "(*))"
```

The `*` can be treated as `(`:

```text
( ( ) )
```

Therefore:

```text
Output = true
```

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Key Learning

- Greedy Algorithm
- Parentheses Matching
- Handling Multiple Possibilities
- Range Tracking
- O(1) Extra Space

## Status

✅ Accepted on LeetCode

## Language

C++