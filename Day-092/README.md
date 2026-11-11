# Day 92 – Group Anagrams

## 🚀 100 Days DSA Challenge

**LeetCode Problem:** [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/)  
**Difficulty:** Medium  
**Topic:** Array, String, Hash Table, Sorting  
**Language:** C++

---

## 📌 Problem Statement

Given an array of strings `strs`, group the anagrams together.

Anagrams are words or strings that contain the same characters with the same frequencies, but their character order may be different.

Return the grouped anagrams in any order.

### Example 1

**Input:**
```text
strs = ["eat","tea","tan","ate","nat","bat"]
```

**Output:**
```text
[["bat"],["nat","tan"],["ate","eat","tea"]]
```

**Explanation:**

- "eat", "tea", and "ate" are anagrams.
- "tan" and "nat" are anagrams.
- "bat" has no matching anagram.

### Example 2

**Input:**
```text
strs = [""]
```

**Output:**
```text
[[""]]
```

### Example 3

**Input:**
```text
strs = ["a"]
```

**Output:**
```text
[["a"]]
```

---

## 💡 Approach: Hash Map + Sorting

The main idea is to use a sorted version of each string as a common key.

Two strings are anagrams if sorting their characters produces the same result.

For example:

```text
eat → aet
tea → aet
ate → aet
```

Since all three strings produce the same sorted key, they belong to the same group.

We use an `unordered_map<string, vector<string>>` to store the groups.

### Algorithm Steps

1. Create an unordered map.
2. Traverse each string in the input array.
3. Copy the current string into a temporary variable called `key`.
4. Sort the characters of `key`.
5. Use the sorted string as the map key.
6. Insert the original string into the corresponding vector.
7. Traverse the map and collect all grouped vectors into the final answer.
8. Return the answer.

---

## 🔍 Dry Run

**Input:**
```text
["eat", "tea", "tan", "ate", "nat", "bat"]
```

| Original String | Sorted Key | Group |
|---|---|---|
| eat | aet | eat |
| tea | aet | eat, tea |
| tan | ant | tan |
| ate | aet | eat, tea, ate |
| nat | ant | tan, nat |
| bat | abt | bat |

**Final Output:**
```text
[["eat","tea","ate"], ["tan","nat"], ["bat"]]
```

Note: The order of groups and strings inside each group does not matter.

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;

            // Sort the characters to create a common key
            sort(key.begin(), key.end());

            // Group the original string using the sorted key
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        // Collect all groups from the map
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
```

---

## ⏱️ Complexity Analysis

Let:
- `n` = Number of strings.
- `k` = Maximum length of a string.

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n × k log k) | Each string is sorted before insertion into the map. |
| Space Complexity | O(n × k) | Stores the grouped strings and their keys. |

---

## 📚 Key Learnings

- Understood how to identify anagrams using sorted strings.
- Learned to use an unordered map for grouping similar elements.
- Practiced storing vectors as map values.
- Understood how to generate a common key for multiple strings.
- Improved problem-solving skills using hashing and sorting.

### Alternative Approach

A frequency-count array of size 26 can also be used as a key because the input contains only lowercase English letters.

This approach can reduce the sorting cost and achieve O(n × k) time complexity.

---

## 🎯 Challenge Progress

- **Day:** 92/100
- **Problems Solved:** 92/100
- **Challenge Progress:** 92%
- **Remaining:** 8 Days
- **Language:** C++
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge

---

> "Consistency is what transforms average into excellence."

---

#100DaysDSA #100DaysOfCode #LeetCode #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins #GroupAnagrams #HashMap #Strings #Sorting