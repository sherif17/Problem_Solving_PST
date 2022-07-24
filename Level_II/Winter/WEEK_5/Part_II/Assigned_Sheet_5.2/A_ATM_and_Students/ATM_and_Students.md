
# Problem Statement
Polycarp started working at a bank. He was assigned to monitor the ATM. The ATM initially contains ss rubles.

A queue of nn students lined up to him. Each student wants to either withdraw a certain amount of money or deposit it into an account. If a_ia
i
​
is positive, then the student credits that amount of money via ATM. Otherwise, the student withdraws |a_i|∣a
i
​
∣ rubles.

In the beginning, the ATM is turned off and an arbitrary number of students are not served. At some point, Polycarp turns on the ATM, which has an initial amount of ss rubles. Then, the remaining students start queueing at the ATM. If at some point in time there is less money in the ATM than the student wants to withdraw, then the student is not served and Polycarp turns off the ATM and does not turn it on anymore.

More formally, the students that are served are forming a contiguous subsequence.

Polycarp wants the ATM to serve the maximum number of students. Help him in this matter. Print the numbers of the first and last student, or determine that he will not be able to serve anyone.

In other words, find such a longest continuous segment of students that, starting with the sum of ss at the ATM, all these students will be served. ATM serves students consistently (i.e. one after another in the order of the queue).

## Constraints
---


## Input
----
The first line of the input contains one integer tt (1 \le t \le 10^41≤t≤10
4
) — the number of test cases.

Each test case consists of two lines. The first one contains integers nn and ss (1 \le n \le 2\cdot10^51≤n≤2⋅10
5
; 0 \le s \le 10^90≤s≤10
9
) — the length of the aa array and the initial amount of rubles in the ATM. The second contains nn integers a_1, a_2, \dots, a_na
1
​
,a
2
​
,…,a
n
​
(-10^9 \le a_i \le 10^9−10
9
≤a
i
​
≤10
9
) — elements of the aa array. Note that a_ia
i
​
can be zero.

It is guaranteed that the sum of the values nn over all test cases does not exceed 2\cdot10^52⋅10
5
.

## Output
---
Print tt lines, each line must contain the answer to the corresponding set of input data: if the answer exists, print the numbers of the first and last served student. If there is no solution, then print -1 on the line.

If there are several possible answers, print any.

### Sample Input 1
----
> **3
4 10
-16 2 -6 8
3 1000
-100000 -100000 -100000
6 0
2 6 -164 1 -1 -6543
**

### Sample Output  1
----
> **2 4
-1
1 2
**

### problem statement
---
https://codeforces.com/problemset/problem/1611/F