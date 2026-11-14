# Day 99 – LeetCode #1791: Find Center of Star Graph

## Problem Details
- **Day:** 99/100
- **Problem Number:** 1791
- **Problem Name:** Find Center of Star Graph
- **Difficulty:** Easy
- **Topic:** Graph
- **Language:** C++

---

## Problem Statement

You are given an undirected star graph containing `n` nodes labeled from `1` to `n`.

A star graph consists of:
- One central node.
- Exactly `n - 1` edges connecting the center to every other node.

Given a 2D array `edges`, where each `edges[i] = [u, v]` represents an undirected edge between nodes `u` and `v`, return the center node of the star graph.

---

## Approach: Compare the First Two Edges

The key observation is that **the center node appears in every edge**.

Since the given graph is guaranteed to be a valid star graph, the first two edges must have exactly one common node.

Instead of traversing the entire graph, we can identify the center by comparing only these two edges.

### Algorithm

1. Take the first two edges.
2. Compare the first node of the first edge with both nodes of the second edge.
3. If a match is found, return that node.
4. Otherwise, return the second node of the first edge.

---

## Dry Run

**Input:**

```cpp
edges = {{1, 2}, {2, 3}, {4, 2}};
```

Consider the first two edges:

- First edge: `[1, 2]`
- Second edge: `[2, 3]`

Comparison:

```text
edges[0][0] = 1
edges[1][0] = 2
edges[1][1] = 3
```

Since `1` does not match either node in the second edge, return:

```cpp
edges[0][1] = 2;
```

**Output:**

```text
2
```

Therefore, node `2` is the center of the star graph.

---

## C++ Solution

```cpp
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        // Check whether the first node of edge 1
        // appears in edge 2
        if (edges[0][0] == edges[1][0] ||
            edges[0][0] == edges[1][1]) {

            return edges[0][0];
        }

        // Otherwise, the second node of edge 1
        // must be the center
        return edges[0][1];
    }
};
```

---

## Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(1) | Only the first two edges are checked |
| Space Complexity | O(1) | No additional data structure is used |

---

## Alternative Approach: Degree Counting

Another approach is to count the degree of every node.

- The center node has degree `n - 1`.
- Every other node has degree `1`.

We can traverse all edges and identify the node with degree `n - 1`.

However, this approach takes O(n) time and O(n) extra space.

The first-two-edges approach is more efficient because it takes O(1) time and O(1) extra space.

---

## Key Learnings

- Understood the structure of an undirected star graph.
- Learned to identify a common node between two edges.
- Used graph properties to avoid unnecessary traversal.
- Practiced optimizing a solution using given constraints.
- Understood how a simple observation can lead to an optimal solution.

---

## Challenge Progress

- **Current Day:** 99/100
- **Problems Completed:** 99
- **Remaining:** 1 Day
- **Challenge:** Dr. G. Viswanathan's 100 Days DSA Challenge
- **Language:** C++

---

*"Great achievements are built through small, consistent efforts. One more step towards the finish line!"*

#100DaysDSA #100DaysOfCode #LeetCode #1791 #FindCenterOfStarGraph #DSA #Graph #Cpp #ProblemSolving #CodingJourney #SoftwareEngineering #ComputerScience #LearningInPublic #DrGViswanathan #ConsistencyWins