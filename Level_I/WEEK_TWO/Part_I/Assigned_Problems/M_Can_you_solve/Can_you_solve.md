
# Problem Statement
Takahashi is visiting a shop specializing in cabbage.

The shop sells cabbage for 
X
 yen (Japanese currency) per head.
However, if you buy more than 
A
 heads of cabbage at once, the 
(
A
+
1
)
-th and subsequent heads will be sold for 
Y
 yen per head.
(It is guaranteed that 
Y
<
X
. See Sample Input/Output 1 for clarity.)

Print the amount of money needed to buy 
N
 heads of cabbage.

## Constraints
---
* 1
≤
N
≤
10^5

* 1
≤
A
≤
10^5

* 1
≤
Y
<
X
≤
100

* All values in input are integers.

## Input
----
Input is given from Standard Input in the following format:

N
 
A
 
X
 
Y


## Output
---
Print the amount of money needed to buy 
N
 heads of cabbage (as an integer)

### Sample Input 1
----
> **  **

### Sample Output  1
----
> **5 3 20 15**



 ### Sample Input 2
----
> **90**
You need to pay 
20
 yen for each of the 
1
-st through 
3
-rd heads of cabbage, and 
15
 yen for each of the 
4
-th and 
5
-th heads of cabbage.
Thus, you need to pay a total of 
20
+
20
+
20
+
15
+
15 =
90
 yen for the 
5
 heads of cabbage.

### Sample Output  2
----
> **10 10 100 1**

 ### Sample Input 3
----
> **1000**
