# Day 90 – LeetCode #217: Contains Duplicate

## Problem Statement

Given an integer array `nums`, return `true` if any value appears at least twice in the array.

Return `false` if every element is distinct.

### Example 1

**Input:**
```text
nums = [1, 2, 3, 1]
```

**Output:**
```text
true
```

**Explanation:** The element `1` appears twice, at indices 0 and 3.

### Example 2

**Input:**
```text
nums = [1, 2, 3, 4]
```

**Output:**
```text
false
```

**Explanation:** Every element is unique.

### Example 3

**Input:**
```text
nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
```

**Output:**
```text
true
```

**Explanation:** Several elements appear more than once.

---

## Problem Details

- **Day:** 90/100
- **Problem Number:** 217
- **Problem Name:** Contains Duplicate
- **Difficulty:** Easy
- **Topic:** Arrays, Hashing, Hash Set
- **Language:** C++

## Approach: Hash Set (Unordered Set)

We use an `unordered_set` to store the elements that we have already visited.

A set stores only unique elements.

Before inserting a number, we check whether it is already present in the set.

- If the number already exists, we found a duplicate and return `true`.
- Otherwise, we insert it into the set.
- If we finish traversing the array without finding a duplicate, return `false`.

## Algorithm

1. Create an empty `unordered_set` named `seen`.
2. Traverse the array using a for-each loop.
3. Check whether the current number is already present in `seen`.
4. If it exists, return `true`.
5. Otherwise, insert the number into the set.
6. If the loop finishes, return `false`.

## C++ Solution

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Store visited elements
        unordered_set<int> seen;

        // Traverse the array
        for (int num : nums) {

            // Check if the number already exists
            if (seen.find(num) != seen.end()) {
                return true;
            }

            // Insert the number into the set
            seen.insert(num);
        }

        // No duplicate found
        return false;
    }
};
```

## Dry Run

**Input:**
```text
nums = [1, 2, 3, 1]
```

Initially:

```text
seen = {}
```

| Step | Current Number | Set Before Checking | Action |
|---|---:|---|---|
| 1 | 1 | `{}` | Insert 1 |
| 2 | 2 | `{1}` | Insert 2 |
| 3 | 3 | `{1, 2}` | Insert 3 |
| 4 | 1 | `{1, 2, 3}` | Duplicate found |

At Step 4, the number `1` is already present in the set.

Therefore, the function immediately returns:

**Output: `true`**

### Dry Run – Example 2

**Input:**
```text
nums = [1, 2, 3, 4]
```

| Step | Current Number | Set After Insertion |
|---|---:|---|
| 1 | 1 | `{1}` |
| 2 | 2 | `{1, 2}` |
| 3 | 3 | `{1, 2, 3}` |
| 4 | 4 | `{1, 2, 3, 4}` |

No duplicate is found.

**Output: `false`**

---

## Complexity Analysis

**Time Complexity: O(n) average case**

- We traverse the array once.
- Searching in an `unordered_set` takes O(1) average time.
- Inserting an element also takes O(1) average time.

Therefore, the average time complexity is O(n).

**Space Complexity: O(n)**

- In the worst case, all elements are unique.
- We may store all n elements in the unordered set.

## Important C++ Concepts

### 1. What is an unordered_set?

`unordered_set` is a C++ STL container that stores unique elements without maintaining any particular order.

Example:

```cpp
unordered_set<int> s;

s.insert(10);
s.insert(20);
s.insert(10);
```

The set contains only:

```text
{10, 20}
```

The duplicate `10` is not stored again.

### 2. What does `find()` do?

```cpp
seen.find(num)
```

It searches for the given element in the set.

- If found, it returns an iterator pointing to that element.
- If not found, it returns `seen.end()`.

Therefore:

```cpp
if (seen.find(num) != seen.end())
```

means the element already exists in the set.

## Key Learnings

- Learned how to detect duplicates using hashing.
- Understood the working of `unordered_set` in C++.
- Practiced using `find()` and `insert()`.
- Learned how to return early when a condition is satisfied.
- Understood how hashing can reduce the need for nested loops.

## Challenge Progress

- **Completed:** 90/100 Days
- **Challenge Progress:** 90%
- **Remaining:** 10 Days
- **Language:** C++
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge

> "Consistency is not about being perfect every day; it is about showing up every day."

#100DaysDSA #100DaysOfCode #LeetCode #DSA #ProblemSolving #Cpp #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins #ContainsDuplicate #Arrays #Hashing #UnorderedSet