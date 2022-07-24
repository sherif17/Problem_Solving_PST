
# Problem Statement
You are given three integers x, yx,y and nn. Your task is to find the maximum integer kk such that 0 \le k \le n0≤k≤n that k \bmod x = ykmodx=y, where \bmodmod is modulo operation. Many programming languages use percent operator % to implement it.

In other words, with given x, yx,y and nn you need to find the maximum possible integer from 00 to nn that has the remainder yy modulo xx.

You have to answer tt independent test cases. It is guaranteed that such kk exists for each test case.

## Constraints
---


## Input
----
The first line of the input contains one integer tt (1 \le t \le 5 \cdot 10^41≤t≤5⋅10
4
) — the number of test cases. The next tt lines contain test cases.

The only line of the test case contains three integers x, yx,y and nn (2 \le x \le 10^9;~ 0 \le y < x;~ y \le n \le 10^92≤x≤10
9
; 0≤y<x; y≤n≤10
9
).

It can be shown that such kk always exists under the given constraints.


## Output
---
For each test case, print the answer — maximum non-negative integer kk such that 0 \le k \le n0≤k≤n and k \bmod x = ykmodx=y. It is guaranteed that the answer always exists.

### Sample Input 1
----
> **7
7 5 12345
5 0 4
10 5 15
17 8 54321
499999993 9 1000000000
10 5 187
2 0 999999999**

### Sample Output  1
----
> **12339
0
15
54306
999999995
185
999999998**

### problem statement
---
https://codeforces.com/problemset/problem/1374/A