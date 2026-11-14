# Day 98 – LeetCode #997: Find the Town Judge

## Problem Details
- **Day:** 98/100
- **Problem Number:** 997
- **Problem Name:** Find the Town Judge
- **Difficulty:** Easy
- **Topic:** Graph, In-Degree, Out-Degree
- **Language:** C++

---

## Problem Statement

There are `n` people in a town, labeled from `1` to `n`. One person may be the town judge.

The town judge must satisfy two conditions:

1. The judge trusts nobody.
2. Everybody else trusts the judge.

Given a 2D array `trust`, where `trust[i] = [a, b]` means person `a` trusts person `b`, return the judge's label if they can be identified. Otherwise, return `-1`.

---

## Approach: In-Degree and Out-Degree Counting

We use an array called `score` to calculate the trust balance of every person.

For each trust relationship `[a, b]`:

- Decrease `score[a]` by 1 because person `a` trusts someone.
- Increase `score[b]` by 1 because person `b` is trusted by someone.

The formula is:

`score[i] = incoming trust - outgoing trust`

For the town judge:

- Incoming trust = `n - 1`
- Outgoing trust = `0`

Therefore:

`score[i] = n - 1`

We return the person whose score equals `n - 1`. If nobody satisfies this condition, return `-1`.

---

## Algorithm

1. Create a `score` array of size `n + 1`, initialized with zeros.
2. Traverse every relationship in the `trust` array.
3. Decrease the score of the person who trusts someone.
4. Increase the score of the person being trusted.
5. Traverse all people from `1` to `n`.
6. If anyone has a score equal to `n - 1`, return that person's label.
7. Otherwise, return `-1`.

---

## Dry Run

**Input:**

```cpp
n = 3;
trust = {{1, 3}, {2, 3}};
```

Initially:

| Person | Score |
|---|---:|
| 1 | 0 |
| 2 | 0 |
| 3 | 0 |

Process `[1, 3]`:

- `score[1]--`
- `score[3]++`

Process `[2, 3]`:

- `score[2]--`
- `score[3]++`

Final scores:

| Person | Score |
|---|---:|
| 1 | -1 |
| 2 | -1 |
| 3 | 2 |

Since `n - 1 = 2`, person `3` satisfies the judge condition.

**Output:**

```text
3
```

---

## C++ Solution

```cpp
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> score(n + 1, 0);

        // Calculate trust balance
        for (auto &t : trust) {
            score[t[0]]--;  // Person who trusts someone
            score[t[1]]++;  // Person who is trusted
        }

        // Find the town judge
        for (int i = 1; i <= n; i++) {
            if (score[i] == n - 1) {
                return i;
            }
        }

        return -1;
    }
};
```

---

## Complexity Analysis

Let:
- `n` = Number of people
- `m` = Number of trust relationships

| Complexity | Analysis |
|---|---|
| Time Complexity | O(n + m) |
| Space Complexity | O(n) |

**Explanation:**
- Processing all trust relationships takes O(m).
- Checking all people takes O(n).
- The score array requires O(n) extra space.

---

## Key Learnings

- Learned how to represent graph relationships using in-degree and out-degree.
- Understood how to calculate trust balance using a single array.
- Practiced identifying a special node using graph properties.
- Learned an efficient solution without constructing an adjacency list.

---

## Challenge Progress

- **Current Day:** 98/100
- **Problems Completed:** 98
- **Remaining:** 2 Days
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

---

*"Every problem solved brings me one step closer to my goal. Consistency creates progress!"*

#100DaysDSA #100DaysOfCode #LeetCode #997 #FindTheTownJudge #DSA #Graph #Cpp #ProblemSolving #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins