# Day 1 - Missing Number (LeetCode 268)

## Problem
Given an array containing n distinct numbers in the range [0, n], find the missing number.

## Approach
Used the Sum Formula:

Expected Sum = n * (n + 1) / 2

Missing Number = Expected Sum - Actual Sum

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## C++ Solution

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums)
            actualSum += num;

        return expectedSum - actualSum;
    }
};