# Day 100 – LeetCode #1328: Break a Palindrome

## Problem Details
- **Day:** 100/100
- **Problem Number:** 1328
- **Problem Name:** Break a Palindrome
- **Difficulty:** Medium
- **Topic:** String, Greedy
- **Language:** C++

---

## Problem Statement

You are given a palindromic string consisting of lowercase English letters.

You must replace exactly one character with another lowercase English letter so that:

1. The resulting string is no longer a palindrome.
2. The resulting string is lexicographically smallest among all possible valid strings.

Return the modified string.

If it is impossible to break the palindrome, return an empty string.

---

## Approach: Greedy

The goal is to make the string lexicographically smallest while breaking its palindrome property.

The key observation is that replacing an earlier character with `'a'` makes the string smaller.

We follow three cases:

1. **Length is 1:** Return an empty string because changing the only character cannot produce a non-palindrome.
2. **Find a non-'a' character in the first half:** Replace the first such character with `'a'` and return the string.
3. **All characters in the first half are 'a':** Replace the last character with `'b'` to break the palindrome.

We only need to examine the first half because changing a character in the middle of an odd-length palindrome does not break its symmetry.

---

## Algorithm

1. Calculate the length of the string.
2. If the length is 1, return `""`.
3. Traverse the first half of the string.
4. Find the first character that is not `'a'`.
5. Replace it with `'a'` and return the modified string.
6. If no such character exists, replace the last character with `'b'`.
7. Return the resulting string.

---

## Dry Run

### Example 1

**Input:**

```cpp
palindrome = "abccba";
```

| Index | Character | Action |
|---|---|---|
| 0 | a | Already smallest, skip |
| 1 | b | Replace with a |

Modified string:

```text
aaccba
```

**Output:**

```text
"aaccba"
```

### Example 2

**Input:**

```cpp
palindrome = "a";
```

Since the string contains only one character, it is impossible to make it non-palindromic.

**Output:**

```text
""
```

### Example 3

**Input:**

```cpp
palindrome = "aaaa";
```

All characters in the first half are `'a'`.

Replace the last character with `'b'`.

**Output:**

```text
"aaab"
```

---

## C++ Solution

```cpp
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();

        // A single character cannot be broken
        if (n == 1) {
            return "";
        }

        // Check only the first half
        for (int i = 0; i < n / 2; i++) {

            // Replace the first non-'a' character
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        // If the first half contains only 'a',
        // change the last character to 'b'
        palindrome[n - 1] = 'b';

        return palindrome;
    }
};
```

---

## Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | At most half of the string is traversed |
| Space Complexity | O(1) | The input string is modified directly |

---

## Key Learnings

- Understood lexicographical ordering of strings.
- Learned how to apply a greedy strategy to string problems.
- Understood why checking only the first half is sufficient.
- Practiced handling special cases.
- Learned to make locally optimal choices to achieve the smallest valid result.

---

## 100 Days DSA Challenge – Completed!

<text>**100/100 Problems Solved!** 🏆</text>

- **Final Day:** 100
- **Total Problems Completed:** 100
- **Remaining:** 0 Days
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

### Final Reflection

100 days of consistency, problem-solving, learning new concepts, debugging, and improving my DSA skills.

Every problem taught me something new, and every challenge helped me become a better problem solver.

This milestone is not the end of learning. It is the beginning of the next chapter!

*"Great things are done by a series of small things brought together."*

#100DaysDSA #100DaysOfCode #LeetCode #1328 #BreakAPalindrome #DSA #Greedy #Strings #Cpp #ProblemSolving #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins