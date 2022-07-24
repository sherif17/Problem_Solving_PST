
# Problem Statement
Highway 201 is the most busy street in Rockport. Traffic cars cause a lot of hindrances to races, especially when there are a lot of them. The track which passes through this highway can be divided into nn sub-tracks. You are given an array aa where a_ia
i
​
represents the number of traffic cars in the ii-th sub-track. You define the inconvenience of the track as \sum\limits_{i=1}^{n} \sum\limits_{j=i+1}^{n} \lvert a_i-a_j\rvert
i=1
∑
n
​

j=i+1
∑
n
​
∣a
i
​
−a
j
​
∣, where |x|∣x∣ is the absolute value of xx.

You can perform the following operation any (possibly zero) number of times: choose a traffic car and move it from its current sub-track to any other sub-track.

Find the minimum inconvenience you can achieve.

## Constraints
---


## Input
----
The first line of input contains a single integer tt (1\leq t\leq 10\,0001≤t≤10000) — the number of test cases.

The first line of each test case contains a single integer nn (1\leq n\leq 2\cdot 10^51≤n≤2⋅10
5
).

The second line of each test case contains nn integers a_1, a_2, \ldots, a_na
1
​
,a
2
​
,…,a
n
​
(0\leq a_i\leq 10^90≤a
i
​
≤10
9
).

It is guaranteed that the sum of nn over all test cases does not exceed 2\cdot 10^52⋅10
5
.


## Output
---
For each test case, print a single line containing a single integer: the minimum inconvenience you can achieve by applying the given operation any (possibly zero) number of times

### Sample Input 1
----
> **3
3
1 2 3
4
0 1 1 0
10
8 3 6 11 5 2 1 7 10 4**

### Sample Output  1
----
> **0
4
21**

### problem statement
---
https://codeforces.com/problemset/problem/1543/B