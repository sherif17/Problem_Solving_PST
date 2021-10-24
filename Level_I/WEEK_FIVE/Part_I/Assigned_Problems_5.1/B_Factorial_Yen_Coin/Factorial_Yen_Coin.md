
# Problem Statement
The coins used in the Kingdom of Takahashi are 
1
!
-yen coins, 
2
!
-yen coins, 
…
, and 
10
!
-yen coins. Here, 
N
!
=
1
×
2
×
⋯
×
N
.

Takahashi has 
100
 of every kind of coin, and he is going to buy a product worth 
P
 yen by giving the exact amount without receiving change.

We can prove that there is always such a way to make payment.

At least how many coins does he need to use in his payment?

## Constraints
---
>1
≤
P
≤
10
7

>P
 is an integer.

## Input
----
Input is given from Standard Input in the following format:

>P


## Output
---
Print the minimum number of coins needed.

### Sample Input 1
----
> **9**

### Sample Output  1
----
> **3
By giving one 
(
1
!
=
)
1
-yen coin, one 
(
2
!
=
)
2
-yen coin, and one 
(
3
!
=
)
6
-yen coin, we can make the exact payment for the product worth 
9
 yen. There is no way to pay this amount using fewer coins.**



 ### Sample Input 2
----
> **119**

### Sample Output  2
----
> **10**
> 
We should use one 
1
!
-yen coin, two 
2
!
-yen coins, three 
3
!
-yen coins, and four 
4
!
-yen coins.
 ### Sample Input 3
----
> **10000000**

### Sample Output  3
----
> **24**

### problem statement
---
https://atcoder.jp/contests/abc208/tasks/abc208_b?lang=en