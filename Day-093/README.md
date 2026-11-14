# Day 93 – LeetCode 1358: Number of Substrings Containing All Three Characters

**Difficulty:** Medium  
**Topic:** Sliding Window, Two Pointers, String  
**Language:** C++

## Problem Statement

Given a string `s` containing only the characters `'a'`, `'b'`, and `'c'`, return the number of substrings that contain at least one occurrence of all three characters.

## Approach: Sliding Window + Two Pointers

We use a sliding window to efficiently find substrings containing all three characters.

### Variables Used

- `left`: Starting index of the current window.
- `right`: Ending index of the current window.
- `count[3]`: Stores the frequency of `a`, `b`, and `c`.
- `ans`: Stores the total number of valid substrings.

### Algorithm

1. Initialize the frequency array with zeros.
2. Expand the window by moving `right`.
3. Increase the frequency of the current character.
4. Check whether all three characters are present.
5. If the window contains `a`, `b`, and `c`:
   - Add `n - right` to the answer because every extension of the current window is also valid.
   - Shrink the window by moving `left`.
6. Repeat until the entire string is processed.
7. Return the total count.

## C++ Solution

```cpp
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();

        int count[3] = {0, 0, 0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {

            // Increase frequency of current character
            count[s[right] - 'a']++;

            // Check if all three characters are present
            while (count[0] > 0 &&
                   count[1] > 0 &&
                   count[2] > 0) {

                // Count all valid extensions
                ans += n - right;

                // Shrink the window
                count[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};
```

## Dry Run

**Input:**
```text
s = "abcabc"
```

| Right | Character | Window | Substrings Added |
|---|---|---|---:|
| 0 | a | a | 0 |
| 1 | b | ab | 0 |
| 2 | c | abc | 4 |
| 3 | a | bca | 3 |
| 4 | b | cab | 2 |
| 5 | c | abc | 1 |

**Total:**

```text
4 + 3 + 2 + 1 = 10
```

**Output:**
```text
10
```

## Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | Both pointers traverse the string at most once. |
| Space Complexity | O(1) | Only three frequency counters are used. |

Here, `n` represents the length of the string.

## Key Learnings

- Learned how to apply the Sliding Window technique to substring problems.
- Understood how two pointers efficiently maintain a valid window.
- Learned to count multiple valid substrings without generating each substring individually.
- Understood the importance of the `n - right` formula.
- Improved problem-solving skills involving strings and frequency counting.

## Challenge Progress

- **Day:** 93/100
- **Problems Completed:** 93
- **Days Remaining:** 7
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

> "Small steps every day lead to big achievements."

#100DaysDSA #100DaysOfCode #LeetCode #1358 #SlidingWindow #TwoPointers #Strings #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins