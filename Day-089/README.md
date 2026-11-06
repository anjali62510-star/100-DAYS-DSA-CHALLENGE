# Day 89 – LeetCode #242: Valid Anagram

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An **Anagram** is a word or phrase formed by rearranging the letters of another word or phrase, using all the original letters exactly once.

### Example 1

**Input:**
```text
s = "anagram"
t = "nagaram"
```

**Output:**
```text
true
```

**Explanation:** Both strings contain exactly the same characters with the same frequencies.

### Example 2

**Input:**
```text
s = "rat"
t = "car"
```

**Output:**
```text
false
```

**Explanation:** The characters in both strings are different.

---

## Problem Details

- **Day:** 89/100
- **Problem Number:** 242
- **Problem Name:** Valid Anagram
- **Difficulty:** Easy
- **Topic:** Strings, Hashing, Frequency Array
- **Language:** C++

## Approach: Frequency Array

We use an array of size 26 to count how many times each lowercase English letter appears.

Since the problem contains only lowercase English letters, we can use `ch - 'a'` to find the index of each character.

### Steps

1. First, compare the lengths of both strings.
2. If their lengths are different, return `false`.
3. Create a frequency array of size 26 and initialize all values to zero.
4. Traverse string `s` and increase the frequency of each character.
5. Traverse string `t` and decrease the frequency of each character.
6. Check every element of the frequency array.
7. If any value is not zero, the strings are not anagrams.
8. If all values are zero, return `true`.

## C++ Solution

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {

        // Check if lengths are different
        if (s.length() != t.length()) {
            return false;
        }

        // Create frequency array for 26 letters
        vector<int> freq(26, 0);

        // Count characters in string s
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Decrease counts using string t
        for (char ch : t) {
            freq[ch - 'a']--;
        }

        // Check whether all frequencies are zero
        for (int count : freq) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
```

## Dry Run

**Input:**
```text
s = "anagram"
t = "nagaram"
```

### Step 1: Count characters in `s`

String: `anagram`

| Character | Frequency |
|---|---:|
| a | 3 |
| n | 1 |
| g | 1 |
| r | 1 |
| m | 1 |

### Step 2: Subtract characters in `t`

String: `nagaram`

Each character decreases its corresponding frequency by 1.

| Character | Before | After |
|---|---:|---:|
| n | 1 | 0 |
| a | 3 | 2 |
| g | 1 | 0 |
| a | 2 | 1 |
| r | 1 | 0 |
| a | 1 | 0 |
| m | 1 | 0 |

### Step 3: Check frequency array

All frequency values are zero.

**Output:**
```text
true
```

Therefore, both strings are anagrams.

---

## Complexity Analysis

**Time Complexity: O(n)**

- Traversing string `s` takes O(n).
- Traversing string `t` takes O(n).
- Checking the frequency array takes O(26), which is constant.

Overall: O(n).

**Space Complexity: O(1)**

- We use a frequency array of fixed size 26.
- Its size does not depend on the input length.

## Key Learnings

- Learned how to use a frequency array to count characters.
- Understood how `ch - 'a'` maps lowercase letters to array indices.
- Practiced comparing two strings using character frequencies.
- Learned that anagrams must contain exactly the same characters with the same frequencies.
- Improved understanding of hashing and string manipulation.

## Challenge Progress

- **Completed:** 89/100 Days
- **Remaining:** 11 Days
- **Language:** C++
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge

> "Consistency is the key to mastering problem-solving."

#100DaysDSA #100DaysOfCode #LeetCode #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins #ValidAnagram #Strings #Hashing