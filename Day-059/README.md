# Day 59 – Evaluate Reverse Polish Notation

## Problem Details

- Problem Number: 150
- Problem Name: Evaluate Reverse Polish Notation
- Difficulty: Medium
- Topic: Stack
- Language: C++

## Approach

Use a stack to evaluate the expression.

1. If the token is a number, push it into the stack.
2. If the token is an operator, pop the top two values.
3. Apply the operator.
4. Push the result back into the stack.
5. The final value in the stack is the answer.

## Example

Input:
["2","1","+","3","*"]

Calculation:

2 + 1 = 3
3 * 3 = 9

Output:
9

## Complexity

- Time: O(n)
- Space: O(n)

## Key Learning

- Stack
- Reverse Polish Notation
- Expression Evaluation
- Operator Handling

## Status

✅ Accepted on LeetCode