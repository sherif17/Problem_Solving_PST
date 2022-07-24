
# Problem Statement
Gregor is learning about RSA cryptography, and although he doesn't understand how RSA works, he is now fascinated with prime numbers and factoring them.

Gregor's favorite prime number is PP. Gregor wants to find two bases of PP. Formally, Gregor is looking for two integers aa and bb which satisfy both of the following properties.

P \bmod a = P \bmod bPmoda=Pmodb, where x \bmod yxmody denotes the remainder when xx is divided by yy, and
2 \le a < b \le P2≤a<b≤P.
Help Gregor find two bases of his favorite prime number!

## Constraints
---

## Input
----
Each test contains multiple test cases. The first line contains the number of test cases tt (1 \le t \le 10001≤t≤1000).

Each subsequent line contains the integer PP (5 \le P \le {10}^95≤P≤10
9
), with PP guaranteed to be prime.

## Output
---
Your output should consist of tt lines. Each line should consist of two integers aa and bb (2 \le a < b \le P2≤a<b≤P). If there are multiple possible solutions, print any.




### Sample Input 1
----
> **2
17
5**

### Sample Output  1
----
> **3 5
2 4**

### problem statement
---
https://codeforces.com/problemset/problem/1549/A