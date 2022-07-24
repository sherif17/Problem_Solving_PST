
# Problem Statement
Alexander is a well-known programmer. Today he decided to finally go out and play football, but with the first hit he left a dent on the new Rolls-Royce of the wealthy businessman Big Vova. Vladimir has recently opened a store on the popular online marketplace "Zmey-Gorynych", and offers Alex a job: if he shows his programming skills by solving a task, he'll work as a cybersecurity specialist. Otherwise, he'll be delivering some doubtful products for the next two years.

You're given nn positive integers a_1, a_2, \dots, a_na
1
​
,a
2
​
,…,a
n
​
. Using each of them exactly at once, you're to make such sequence b_1, b_2, \dots, b_nb
1
​
,b
2
​
,…,b
n
​
that sequence c_1, c_2, \dots, c_nc
1
​
,c
2
​
,…,c
n
​
is lexicographically maximal, where c_i=GCD(b_1,\dots,b_i)c
i
​
=GCD(b
1
​
,…,b
i
​
) - the greatest common divisor of the first ii elements of bb.

Alexander is really afraid of the conditions of this simple task, so he asks you to solve it.

A sequence aa is lexicographically smaller than a sequence bb if and only if one of the following holds:

aa is a prefix of bb, but a \ne ba

=b;
in the first position where aa and bb differ, the sequence aa has a smaller element than the corresponding element in bb.

## Constraints
---


## Input
----
Each test contains multiple test cases. The first line contains the number of test cases tt (1 \le t \le 10^31≤t≤10
3
). Description of the test cases follows.

The first line of each test case contains a single integer nn (1 \le n \le 10^31≤n≤10
3
)  — the length of the sequence aa.

The second line of each test case contains nn integers a_1,\dots,a_na
1
​
,…,a
n
​
(1 \le a_i \le 10^31≤a
i
​
≤10
3
)  — the sequence aa.

It is guaranteed that the sum of nn over all test cases does not exceed 10^310
3
.

## Output
---
For each test case output the answer in a single line  — the desired sequence bb. If there are multiple answers, print any.


### Sample Input 1
----
> **7
2
2 5
4
1 8 2 3
3
3 8 9
5
64 25 75 100 50
1
42
6
96 128 88 80 52 7
5
2 4 8 16 17**

### Sample Output  1
----
> **5 2
8 2 1 3
9 3 8
100 50 25 75 64
42
128 96 80 88 52 7
17 2 4 8 16 **

### problem statement
---
https://codeforces.com/problemset/problem/1407/B