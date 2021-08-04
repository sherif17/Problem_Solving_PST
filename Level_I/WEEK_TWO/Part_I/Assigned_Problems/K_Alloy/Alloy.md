
# Problem Statement

Takahashi melted and mixed 
A
 grams of gold and 
B
 grams of silver 
(
0
≤
A
,
B
,
 
0
<
A
+
B
)
 to produce new metal.

What metal did he produce: pure gold, pure silver, or an alloy?

Formally, the product is called as follows.

Pure gold, if 
0
<
A
 and 
B=
0
.
Pure silver, if 
A=
0
 and 
0
<
B
.
An alloy, if 
0
<
A
 and 
0
<
B
.

## Constraints
---
* 0
≤
A
,
B
≤
100
* 1
≤
A+
B
* All values in input are integers.

## Input
----
Input is given from Standard Input in the following format:

A
 
B


## Output
---
If the product is pure gold, print Gold; if it is pure silver, print Silver; if it is an alloy, print Alloy.

### Sample Input 1
----
> **50 50**

### Sample Output  1
----
> **Alloy**
> 
We have 
0
<
A
 and 
0
<
B
, so the product is an alloy.


 ### Sample Input 2
----
> **100 0**

### Sample Output  2
----
> **Gold**
> 
We have 
0
<
A
 and 
B=
0
, so the product is pure gold.
 ### Sample Input 3
----
> **0 100**

### Sample Output  3
----
> **Silver**
> 
We have 
A=
0
 and 
0
<
B
, so the product is pure silver
