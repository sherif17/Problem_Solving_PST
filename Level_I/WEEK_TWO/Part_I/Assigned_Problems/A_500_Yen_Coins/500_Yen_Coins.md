
# Problem Statement

Takahashi has 
K
 
500
-yen coins. (Yen is the currency of Japan.) If these coins add up to 
X
 yen or more, print Yes; otherwise, print No.

## Constraints
---
* 1
≤
K
≤
100

* 1
≤
X
≤
10
5

## Input
----
Input is given from Standard Input in the following format:

K
 
X


## Output
---
If the coins add up to 
X
 yen or more, print Yes; otherwise, print No.

### Sample Input 1
----
> **2 900**

### Sample Output  1
----
> **Yes**

Two 
500
-yen coins add up to 
1000
 yen, which is not less than 
X=900 yen

 ### Sample Input 2
----
> **1 501**

### Sample Output  2
----
> **No**
One 
500
-yen coin is worth 
500
 yen, which is less than 
X=
501
 yen.

 ### Sample Input 3
----
> **4 2000**

### Sample Output  3
----
> **Yes**
Four 
500
-yen coins add up to 
2000
 yen, which is not less than 
X
=
2000
 yen.


