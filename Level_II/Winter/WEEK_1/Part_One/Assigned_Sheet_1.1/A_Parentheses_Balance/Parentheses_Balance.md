
# Problem Statement
You are given a string consisting of parentheses () and []. 

A string of this type is said to be correct:

(a) if it is the empty string

(b) if A and B are correct, AB is correct,

(c) if A is correct, (A) and [A] is correct.

Write a program that takes a sequence of strings of this type and check their correctness. Your
program can assume that the maximum string length is 128.

## Constraints
---


## Input
----
The file contains a positive integer n and a sequence of n strings of parentheses ‘()’ and ‘[]’, one string
a line

## Output
---
A sequence of ‘Yes’ or ‘No’ on the output file

### Sample Input 1
----
> **3
([])
(([()])))
([()[]()])()
**

### Sample Output  1
----
> **Yes
No
Yes**


### problem statement
---
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614