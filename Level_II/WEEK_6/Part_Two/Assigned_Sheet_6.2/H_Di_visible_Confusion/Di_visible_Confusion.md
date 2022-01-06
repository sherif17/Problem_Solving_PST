
# Problem Statement
YouKn0wWho has an integer sequence a_1, a_2, \ldots, a_na
1
​
,a
2
​
,…,a
n
​
. He will perform the following operation until the sequence becomes empty: select an index ii such that 1 \le i \le |a|1≤i≤∣a∣ and a_ia
i
​
is not divisible by (i + 1)(i+1), and erase this element from the sequence. Here |a|∣a∣ is the length of sequence aa at the moment of operation. Note that the sequence aa changes and the next operation is performed on this changed sequence.

For example, if a=[3,5,4,5]a=[3,5,4,5], then he can select i = 2i=2, because a_2 = 5a
2
​
=5 is not divisible by i+1 = 3i+1=3. After this operation the sequence is [3,4,5][3,4,5].

Help YouKn0wWho determine if it is possible to erase the whole sequence using the aforementioned operation.

## Constraints
---


## Input
----
The first line contains a single integer tt (1 \le t \le 10\,0001≤t≤10000)  — the number of test cases.

The first line of each test case contains a single integer nn (1 \le n \le 10^51≤n≤10
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
(1 \le a_i \le 10^91≤a
i
​
≤10
9
).

It is guaranteed that the sum of nn over all test cases doesn't exceed 3 \cdot 10^53⋅10
5
.

## Output
---
For each test case, print "YES" (without quotes) if it is possible to erase the whole sequence using the aforementioned operation, print "NO" (without quotes) otherwise. You can print each letter in any register (upper or lower).

### Sample Input 1
----
> **5
3
1 2 3
1
2
2
7 7
10
384836991 191890310 576823355 782177068 404011431 818008580 954291757 160449218 155374934 840594328
8
6 69 696 69696 696969 6969696 69696969 696969696**

### Sample Output  1
----
> **YES
NO
YES
YES
NO**


### problem statement
---
https://codeforces.com/problemset/problem/1604/C