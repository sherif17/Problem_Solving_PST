
# Problem Statement
This problem is a simplified version of D2, but it has significant differences, so read the whole statement.

Polycarp has an array of nn (nn is even) integers a_1, a_2, \dots, a_na
1
​
,a
2
​
,…,a
n
​
. Polycarp conceived of a positive integer kk. After that, Polycarp began performing the following operations on the array: take an index ii (1 \le i \le n1≤i≤n) and reduce the number a_ia
i
​
by kk.

After Polycarp performed some (possibly zero) number of such operations, it turned out that all numbers in the array became the same. Find the maximum kk at which such a situation is possible, or print -1−1 if such a number can be arbitrarily large.

## Constraints
---
The first line contains one integer tt (1 \le t \le 101≤t≤10) — the number of test cases. Then tt test cases follow.

Each test case consists of two lines. The first line contains an even integer nn (4 \le n \le 404≤n≤40) (nn is even). The second line contains nn integers a_1, a_2, \dots a_na
1
​
,a
2
​
,…a
n
​
(-10^6 \le a_i \le 10^6−10
6
≤a
i
​
≤10
6
).

It is guaranteed that the sum of all nn specified in the given test cases does not exceed 100100.


## Input
----


## Output
---
For each test case output on a separate line an integer kk (k \ge 1k≥1) — the maximum possible number that Polycarp used in operations on the array, or -1−1, if such a number can be arbitrarily large.

### Sample Input 1
----
> **3
6
1 5 3 1 1 5
8
-1 0 1 -1 0 1 -1 0
4
100 -1000 -1000 -1000**

### Sample Output  1
----
> **2
1
1100**

### problem statement
---
https://codeforces.com/problemset/problem/1593/D1
