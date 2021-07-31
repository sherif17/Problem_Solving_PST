# Problem Statement
For an integer 
n
, let 
S
(
n
)
 be the sum of digits in the decimal notation of 
n
. For example, we have 
S
(
123
)=
1
+
2
+
3=
6
.

Given two 
3
-digit integers 
A
 and 
B
, find the greater of 
S
(
A
)
 and 
S
(
B
)
.

## Constraints
-----

* All values in input are integers.

* 100
≤
A
,
B
≤
999

* All values in input are integers
 


## Input
------
Input is given from Standard Input in the following format:

A
 
B

## Output
------
Print the value of the greater of 
S
(
A
)
 and 
S
(
B
)
.
If these are equal, print 
S
(
A
)
.


### Sample Input 1
----
> **123 234**

### Sample Output  1
----
> **9**

We have 
S
(
123
)=
1
+
2
+
3=
6
 and 
S
(
234
)=
2
+
3
+
4=
9
, so we should print the greater of these: 
9
.
### Sample Input 2
----
> **593 953**

### Sample Output  2
----
> **17**


### Sample Input 3
----
> **100 999**

### Sample Output  3
----
> **27**